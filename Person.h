//Programmer:  Joseph Chang
//Section:     #001 (Lecture)
//Date:        Feb 18, 2018
//File name:   <Person.h>

#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
protected:
	string first_name;
	string last_name;
	string mother_maiden_name;
	int ssn;
	static int num;
public:
	void setFirst_name(string);
	void setLast_name(string);
	void setMother_maiden_name(string);
	void setSsn(int);

	string getFirst_name();
	string getLast_name();
	string getMother_maiden_name();
	int getSsn();
	int getNum();
	Person();
	Person(string, string, string, int);
	Person(const Person &tempPerson);
	Person & Person::operator=(const Person &tempPerson);
	~Person();
	virtual void print();
};



#endif