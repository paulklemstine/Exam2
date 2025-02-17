#pragma once
#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
	string m_name;
	float m_gpa;

public:

	//setters
	void SetName(const string pName) { m_name = pName; }
	void setGPA(const float pGPA) { m_gpa = pGPA; }

	//display student name and HPA
	void Display() {
		cout << m_name << " has a GPA of " << m_gpa  << ".\n";
	}
	
	//default constructor
	Student() {
		m_name = "Unkown";
		m_gpa = 0;
	}

	//constructor
	Student(const string pName, const float pGpa) {
		m_name = pName;
		m_gpa = pGpa;
	}


};

