#pragma once
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Student
{
	string name;
	string surname;
	string patronymic;
	string adress = "No adress";
	string tel = "No tel";
	int day;
	int month;
	int year;
	int size_cred = 0;
	int size_exam = 0;
	int size_cours = 0;
	int count_marks = 0;
	int* mark_cred = nullptr;
	int* mark_exam = nullptr;
	int* mark_cours = nullptr;
	
	

public:

	Student()
	{
		string name = "Name";
		string surname = "Surname";
		string patronymic = "Patronymic";
	}
	Student(string name, string surname, string patronymic)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
	}
	Student(string name, string surname, string patronymic, string adress, string tel)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		this->adress = adress;
		this->tel = tel;
		this->mark_cred = new int[size_cred];
		this->mark_exam = new int[size_exam];
		this->mark_cours = new int[size_cours];
	}

	void SetName(string name)
	{
		this->name = name;
	}
	void SetSurname(string surname)
	{
		this->surname = surname;
	}
	void SetPatronymic(string patronymic)
	{
		this->patronymic = patronymic;
	}
	void SetAdress(string Adress)
	{
		this->adress = Adress;
	}
	void SetTel(string tel)
	{
		this->tel = tel;
	}

	void SetDate(int day, int month, int year);

	void SetMark_Cred(int mark);

	void SetMark_Exam(int mark);

	void SetMark_Cours(int mark);

	void ShowStudent();

};