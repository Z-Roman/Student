#include <iostream>
#include "Student.h"
#include "Date.h"
using namespace std;

void Student::operator=(const Student& other) //перегрузка оператора присваивания
{
	this->name = other.name;
	this->surname = other.surname;
	this->patronymic = other.patronymic;
	this->adress = other.adress;
	this->tel = other.tel;
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
	this->size_cred = other.size_cred;
	this->size_exam = other.size_exam;
	this->size_cours = other.size_cours;

	if (this->mark_cred != nullptr)
	{
		delete[] this->mark_cred;
	}

	if (this->mark_exam != nullptr)
	{
		delete[] this->mark_exam;
	}

	if (this->mark_cours != nullptr)
	{
		delete[] this->mark_cours;
	}

	this->mark_cours = new int[other.size_cours];

	for (int i = 0; i < other.size_cours; i++)
	{
		this->mark_cours[i] = other.mark_cours[i];
	}

	this->mark_cred = new int[other.size_cred];

	for (int i = 0; i < other.size_cred; i++)
	{
		this->mark_cred[i] = other.mark_cred[i];
	}

	this->mark_exam = new int[other.size_exam];

	for (int i = 0; i < other.size_exam; i++)
	{
		this->mark_exam[i] = other.mark_exam[i];
	}
}

Student::Student(const Student& other) //конструктор копирования
{
	this->name = other.name;
	this->surname = other.surname;
	this->patronymic = other.patronymic;
	this->adress = other.adress;
	this->tel = other.tel;
	this->day = other.day;
	this->month = other.month;
	this->year = other.year;
	this->size_cred = other.size_cred;
	this->size_exam = other.size_exam;
	this->size_cours = other.size_cours;

	this->mark_cours = new int[other.size_cours];

	for (int i = 0; i < other.size_cours; i++)
	{
		this->mark_cours[i] = other.mark_cours[i];
	}

	this->mark_cred = new int[other.size_cred];

	for (int i = 0; i < other.size_cred; i++)
	{
		this->mark_cred[i] = other.mark_cred[i];
	}

	this->mark_exam = new int[other.size_exam];

	for (int i = 0; i < other.size_exam; i++)
	{
		this->mark_exam[i] = other.mark_exam[i];
	}
}

void Student::SetAll(string name, string surname, string patronymic, string adress, string tel, int day, int month, int year)
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
}

void Student::SetDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Student::SetMark_Cred(int mark)  //добавление оценки (в массив оценок)
{
	int* temp = new int[size_cred + 1];  //временный дин. массив размером +1 (для добавления оценки)
	for (int i = 0; i < size_cred; i++) //копирование элементов во временный массив
	{
		temp[i] = mark_cred[i];
	}
	temp[size_cred] = mark; //новую оценку в последнюю ячейку
	size_cred++; //старый массыв увеличиваю на 1
	delete[]mark_cred; //удаление значение ячеек старого массива
	mark_cred = temp;  //копирование в старый массив значение из временного
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

	cout << "\n";
}

Student::~Student()
{
	cout << "Вызвался деструктор " << this << "\n";
	delete[] mark_cred;
	delete[] mark_cours;
	delete[] mark_exam;
}
