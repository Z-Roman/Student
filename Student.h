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
	string adress;
	string tel;
	Date date;
	int size_cred;
	int size_exam;
	int size_cours;
	int* mark_cred = new int[];
	int* mark_exam = new int[];
	int* mark_cours = new int[];

public:


};
