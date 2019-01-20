//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <doctorType.cpp>

#pragma once
#include "Person.h"

using namespace std;
class doctorType : public Person
{
private:
	string specialty;
public:
	doctorType();
	doctorType(string, string, string, string, int);
	~doctorType();
	void setSpecialty(string spec)
	{
		specialty = spec;
	}
	string setSpecialty()
	{
		return specialty;
	}
	void print();
};

