//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <patientType.h>

#pragma once
#include "Person.h"
#include "Date.h"
#include "doctorType.h"

class patientType : public Person
{
private:
	string patientID;
	int age;
	Date birth;
	Date admit;
	Date discharge;
	doctorType doct;
public:
	patientType();
	patientType(string, int, Date, Date, Date, doctorType, string, string, string, int);
	~patientType();
	void print();

	void setPatientID(string ID)
	{
		patientID = ID;
	}
	void setAge(int temp_age)
	{
		age = temp_age;
	}
	void setBirth(Date temp_birth)
	{
		birth = temp_birth;
	}
	void setDoct(doctorType temp_doc)
	{
		doct = temp_doc;
	}

	string getPatientID()
	{
		return patientID;
	}
	int getAge()
	{
		return age;
	}
	Date getBirth()
	{
		return birth;
	}
	doctorType getDoct()
	{
		return doct;
	}
};

