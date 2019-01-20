//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <Main.cpp>

#include "patientType.h"
#include "doctorType.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<Person*> persons;
	Date d1(-1, 43, 2020);
	Date d2(2, 18, 2018);
	Date d3(6, 9, 1999);
	Date d4(7, 30, 2017);

	doctorType doct("surgeon", "Alyssa", "Unknown", "Unknown", 3574);

	persons.push_back(new Person("Joseph", "Chang", "Tu", 5740));
	persons.push_back(new doctorType("surgeon", "John", "Park", "Grace", 1345));
	persons.push_back(new patientType("jbc5740", 18, d3, d4, d2, doct, "Keith", "Bubalo", "Ashely", 1746));

	cout << "\nperson 0\n";
	persons[0]->print();
	cout << "\nperson 1\n";
	persons[1]->print();
	cout << "\nperson 2\n";
	persons[2]->print();

	system("pause");
	return 0;
}