// MyFirstOOPApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Student.h"
int main()
{
	Student student1; // object of the class Student 
	student1.setName("Jacob");
	student1.setMajor("English");
	student1.setID("123456");
	student1.setYear(1);

	student1.PrintInfo();

	student1.ChangeMajor("CS");



	Student student2;
	student2.PrintInfo();

	Student student3("313441", "Mary", "CS", 2);

	student3.PrintInfo();

}

