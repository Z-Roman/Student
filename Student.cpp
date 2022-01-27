#include <iostream>
#include "Student.h"
#include "Date.h"
using namespace std;



void Student::SetDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Student::SetMark_Cred(int mark)
{
	int* temp = new int[size_cred + 1];
	for (int i = 0; i < size_cred; i++)
	{
		temp[i] = mark_cred[i];
	}
	temp[size_cred] = mark;
	size_cred++;
	delete[]mark_cred;
	mark_cred = temp;
}

void Student::SetMark_Exam(int mark)
{
	int* temp = new int[size_exam + 1];
	for (int i = 0; i < size_exam; i++)
	{
		temp[i] = mark_exam[i];
	}
	temp[size_exam] = mark;
	size_exam++;
	delete[]mark_exam;
	mark_exam = temp;
}

void Student::SetMark_Cours(int mark)
{
	int* temp = new int[size_cours + 1];
	for (int i = 0; i < size_cours; i++)
	{
		temp[i] = mark_cours[i];
	}
	temp[size_cours] = mark;
	size_cours++;
	delete[]mark_cours;
	mark_cours = temp;
}

//ostream& operator << (ostream& os, const Date& date)
//{
//
//	os << date.GetDay() << "." << date.GetMonth() << "." << date.GetYear();
//	return os;
//}

void Student::ShowStudent()
{
	cout << "Имя\t\t\t" << name << "\n";
	cout << "Фамилия\t\t\t" << surname << "\n";
	cout << "Отчество\t\t" << patronymic << "\n";
	cout << "Дата р.\t\t\t" << day << "." << month << "." << year << "\n";
	cout << "Адрес\t\t\t" << adress << "\n";
	cout << "Телефон\t\t\t" << tel << "\n";
	cout << "Оценки по зачетам\t";

		if (size_cred > 0)
		{
			for (int i = 0; i < size_cred; i++)
			{
				cout << mark_cred[i] << " ";
			}
			cout << "\n";
		}

	cout << "Оценки по экзаменам\t";

		if (size_exam > 0)
		{
			for (int i = 0; i < size_exam; i++)
			{
				cout << mark_exam[i] << " ";
			}
			cout << "\n";
		}

	cout << "Оценки по курсовым\t";

		if (size_cours > 0)
		{
			for (int i = 0; i < size_cours; i++)
			{
				cout << mark_cours[i] << " ";
			}
			cout << "\n";
		}
}