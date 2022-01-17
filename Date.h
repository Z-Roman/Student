#pragma once
#include <iostream>
using namespace std;

class Date
{
	int day;
	int month;
	int year;

public:

	Date()
	{
		this->day = 1;
		this->month = 1;
		this->year = 1980;
	}

	Date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void ShowDate()
	{
		cout << day << "." << month << "." << year;
	}
};

