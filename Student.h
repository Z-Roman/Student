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
	Date date;
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
	Student(string name, string surname, string patronymic, string adress, string tel,
		Date date)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		this->adress = adress;
		this->tel = tel;
		this->date = date;
		this->mark_cred = new int[100];
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
	void SetDate(Date date)
	{
		this->date = date;
	}
	void SetSizeCred(int size_cred)
	{
		this->size_cred = size_cred;
	}
	void SetSizeExam(int size_exam)
	{
		this->size_exam = size_exam;
	}
	void SetSizeCours(int size_cours)
	{
		this->size_cours = size_cours;
	}



	void ShowStudent();

};