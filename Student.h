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
	int day = 1;
	int month = 1;
	int year = 2000;
	int size_cred = 0;
	int size_exam = 0;
	int size_cours = 0;
	int count_marks = 0;
	int* mark_cred = nullptr;
	int* mark_exam = nullptr;
	int* mark_cours = nullptr;
	
public:

	// этот делегируем к главному
	Student() : Student(name, surname, patronymic, adress, tel, day, month, year)
	{
		
	}

	// этот делегируем к главному
	Student(string name, string surname, string patronymic) : Student (name, surname, patronymic, adress, tel, day, month, year)
	{

	}

	// этот конструктор было бы здорово назначить главным
	Student(string name, string surname, string patronymic, string adress, string tel, int day, int month, int year)
	{
		this->name = name;
		this->surname = surname;
		this->patronymic = patronymic;
		this->adress = adress;
		this->tel = tel;
		this->mark_cred = new int[size_cred];
		this->mark_exam = new int[size_exam];
		this->mark_cours = new int[size_cours];
		this->day = day;
		this->month = month;
		this->year = year;
		// в главном конструкторе все поля должны быть проинициализированы (например day month year)
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

	void operator = (const Student& other);

	Student(const Student& other);

	void SetDate(int day, int month, int year);

	void SetMark_Cred(int mark);

	void SetMark_Exam(int mark);

	void SetMark_Cours(int mark);

	void ShowStudent();

	~Student();

};
