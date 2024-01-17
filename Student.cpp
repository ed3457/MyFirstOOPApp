#include "Student.h"
// details 
#include <iostream>
using namespace std; 
void Student::setID(string i)
{   // you can do validation here 
	id = i;

}

string Student::getID()
{   // you can format the output 
	return id;
}

void Student::setMajor(string m)
{
	major = m;

}

string Student::getMajor()
{
	return major;
}

void Student::setName(string n)
{
	name = n;
}

string Student::getName()
{
	return name; 
}

void Student::setYear(int y)
{
	year = y;

}

int Student::getYear()
{
	return year;
}

void Student::PrintInfo()
{
	cout << "Name:" << getName() << endl;
	cout << "Major:" << getMajor() << endl;
	cout << "ID:" << getID() << endl;
	cout << "Year:" << getYear() << endl;

}