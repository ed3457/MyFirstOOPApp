#pragma once
#include <string>
using namespace std;

class Student
{
	// data
private: 
	string id; 
	int year; 
	string name; // TODO: split into first, mi, last 
	string major;

	// functions 
public: 
	void PrintInfo();
	void ChangeMajor(string newMajor);

	// setters and getters 

	// set id 
	void setID(string id); // in 
	// get id 
	string getID(); // out 

	void setYear(int year);
	int getYear();

	void setName(string name);
	string getName();

	void setMajor(string major);
	string getMajor();


};

