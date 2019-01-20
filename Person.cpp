//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <Person.cpp>

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

int Person::num = 0;

void Person::print()
{
	cout << "\tFirst name: " << first_name;
	cout << "\n\tLast name: " << last_name;
	cout << "\n\tMother maiden name: " << mother_maiden_name;
	cout << "\n\tssn: " << ssn << endl;
}

//Copy assignment
Person & Person::operator=(const Person &tempPerson)
{
	if (this != &tempPerson)
	{
		//copy
		first_name = (tempPerson.first_name);
		last_name = (tempPerson.last_name);
		mother_maiden_name = (tempPerson.mother_maiden_name);
		ssn = tempPerson.ssn;

		return *this;
	}
	else
		return *this;
}

//Constructor
Person::Person()
{
	num++;
}

Person::Person(string first, string last, string mothers, int ssnTemp)
{
	num++;

	//enter information
	first_name = first;
	last_name = last;
	mother_maiden_name = mothers;
	ssn = ssnTemp;
}

//Copy constructor
Person::Person(const Person &tempPerson)
{
	num++;

	//copy
	first_name = tempPerson.first_name;
	last_name = tempPerson.last_name;
	mother_maiden_name = tempPerson.mother_maiden_name;
	ssn = tempPerson.ssn;
}

//Modifiers
void Person::setFirst_name(string first)
{
	first_name = first;
}

void Person::setLast_name(string last)
{
	last_name = last;
}

void Person::setMother_maiden_name(string mothers)
{
	mother_maiden_name = mothers;
}

void Person::setSsn(int ssnTemp)
{
	ssn = ssnTemp;
}

//Accessors value
string Person::getFirst_name()
{
	return first_name;
}

string Person::getLast_name()
{
	return last_name;
}

string Person::getMother_maiden_name()
{
	return mother_maiden_name;
}

int Person::getSsn()
{
	return ssn;
}

int Person::getNum()
{
	return num;
}

//Destructor
Person::~Person()
{
}
