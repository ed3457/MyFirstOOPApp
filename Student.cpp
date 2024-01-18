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

void Student::ChangeMajor(string m)
{
	if (getYear() >= 2)
	{
		setMajor(m);
	}
	else
	{
		cout << "You cannot change the major before your 2nd year!\n";

	}

}

Student::Student()
{
	setID("Not set yet");
	setName("Not set yet");
	setMajor("Not set yet");
	setYear(1);

}

Student::Student(string i, string n, string m, int y)
{
	setID(i);
	setMajor(m);
	setName(n);
	setYear(y);

}