#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

int main()
{
	setlocale(0, "");
	Student a;
	Student b;
	a.SetDate(10, 12, 2000);
	a.SetName("Roman");
	a.SetSurname("Zharuk");
	a.SetPatronymic("Viktorovich");
	a.SetAdress("Odesa");
	a.SetMark_Cred(10);
	a.SetMark_Cred(11);
	a.SetMark_Cred(7);
	a.SetMark_Exam(5);
	a.SetMark_Exam(6);
	a.SetMark_Exam(12);
	a.SetMark_Cours(6);
	a.SetMark_Cours(7);
	a.SetMark_Cours(8);
	a.SetMark_Cours(12);
	a.SetTel("0990426204");
	a.ShowStudent();
	b = a;
	b.ShowStudent();

}