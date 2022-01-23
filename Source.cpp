#include <iostream>
#include <string>
#include "Date.h"
#include "Student.h"
using namespace std;

int main()
{
	setlocale(0, "");
	Date d;
	Student a;
	a.SetDate(Date(10, 12, 2000));
	a.SetName("Roman");
	a.SetSurname("Zharuk");
	a.SetPatronymic("Viktorovich");
	a.SetAdress("Odesa");
//	a.SetSizeCours(1);
//	a.SetSizeCred(10);
//	a.SetSizeExam(9);
	a.SetTel("0990426204");
	a.ShowStudent();
}