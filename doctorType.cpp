//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <doctorType.cpp>

#include "doctorType.h"
#include <iostream>
using namespace std;

doctorType::doctorType()
{
}

doctorType::doctorType(string spec, string first, string last, string mothers, int ssn) : Person(first, last, mothers, ssn)
{
	specialty = spec;
}


doctorType::~doctorType()
{
}

void doctorType::print()
{
	cout << "\tDoctor's specialty: " << specialty;
	cout << "\n\tFirst name: " << getFirst_name();
	cout << "\n\tLast name: " << getLast_name();
	cout << "\n\tMother maiden name: " << getMother_maiden_name();
	cout << "\n\tssn: " << getSsn() << endl;
}