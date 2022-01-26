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

	Date()
	{
		this->day = 1;
		this->month = 1;
		this->year = 1980;
	}

	//Date(int day, int month, int year)
	//{
	//	this->day = day;
	//	this->month = month;
	//	this->year = year;
	//}

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

	void SetDate(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}

};

