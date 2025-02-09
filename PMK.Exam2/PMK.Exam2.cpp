// Paul Klemstine
// C++ Exam 2 
// 2/9/2025


#include <iostream>
#include <conio.h>
#include <string>
#include "Student.h"


using namespace std;

int main()
{

    // create a student and prompt the user for name and gpa
    Student student = Student(); //create a student on the stack
    string name;
    cout << "Enter the name of the student: ";
    cin >> name;
    cout << "Enter " << name << "'s GPA:";
    float gpa;
    cin >> gpa;
    student.SetName(name);
    student.setGPA(gpa);
    student.Display();

    cout << "Do you want to create another student (Y/N)?\n";
    string response;
    cin >> response;
    if (response=="Y"||response == "y"){
        string name;
        cout << "\nEnter the name of the student: ";
        cin >> name;
        cout << "\nEnter " << name << "'s GPA:";
        float gpa;
        cin >> gpa;

        //create another student on the heap
        Student* student = new Student(name,gpa);
        student->Display();
        delete student;
    }

    
    (void)_getch();
    return 0;
}
