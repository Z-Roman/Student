#include <iostream>
#include "Student.h"
#include "Date.h"
using namespace std;



void Student::ShowStudent()
{
	cout << "���\t" << name << "\n"
		<< "�������\t" << surname << "\n"
		<< "��������\t" << patronymic << "\n"
		//<< "���� �.\t" << date << "\n"
		<< "�����\t" << adress << "\n"
		<< "�������\t" << tel << "\n";
}

/*	string name;
	string surname;
	string patronymic;
	string adress = "No adress";
	string tel = "No tel";
	Date date;
	int size_cred = 0;
	int size_exam = 0;
	int size_cours = 0;
	int* mark_cred;
	int* mark_exam;
	int* mark_cours;
	*/