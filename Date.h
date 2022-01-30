#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Date
{
	int day;
	int month;
	int year;

public:

	Date() :Date(1, 1, 2000){}

	Date(int day, int month, int year)
	{
		SetDay(day);
		SetMonth(month);
		SetYear(year);
	}

	const int GetDay() const
	{
		return day;
	}

	const int GetMonth() const
	{
		return month;
	}

	const int GetYear() const
	{
		return year;
	}

	void SetDay(int day)
	{
		this->day = day;
	}

	void SetMonth(int month)
	{
		this->month = month;
	}

	void SetYear(int year)
	{
		this->year = year;
	}

	void SetDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
};

