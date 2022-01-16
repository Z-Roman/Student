#pragma once
#include <iostream>
using namespace std;

class Date
{
	unsigned int day;
	unsigned int month;
	unsigned int year;

public:

	Date()
	{
		this->day = 1;
		this->month = 1;
		this->year = 1980;
	};

	Date(unsigned int day, unsigned int month, unsigned int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	};

};

