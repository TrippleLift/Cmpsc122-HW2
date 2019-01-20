//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <patientType.cpp>

#include "patientType.h"
#include <iostream>

patientType::patientType()
{
}

patientType::patientType(string ID, int temp_age, Date temp_birth,
	Date temp_admit, Date temp_discharge, doctorType temp_doc,
	string temp_first, string temp_last, string temp_mothers, int temp_ssn)
	: Person(temp_first, temp_last, temp_mothers, temp_ssn)
{
	patientID = ID;
	age = temp_age;
	birth = temp_birth;
	admit = temp_admit;
	discharge = temp_discharge;
	doct = temp_doc;
}

patientType::~patientType()
{
}

void patientType::print()
{
	cout << "Patient's information\n";
	cout << "\tFisrt name: " << first_name;
	cout << "\n\tLast name: " << last_name;
	cout << "\n\tMother's maiden name: " << mother_maiden_name;
	cout << "\n\tssn: " << ssn;
	cout << "\n\tID: " << patientID;
	cout << "\n\tAge: " << age;
	cout << "\n\tBirth date: " << birth;
	cout << "\n\tAdmit date: " << admit;
	cout << "\n\tDischarge date: " << discharge;
	cout << "\nAttending physician's information\n";
	doct.print();
}