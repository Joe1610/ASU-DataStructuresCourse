// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    // Lab 1
    cout << "Enter no of students: ";
    int num;
    cin >> num;
    Student* studs = new Student[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << endl;
        studs[i].readData();
        studs[i].sumData();
    }

    for (int i = 0; i < num; i++)
    {
        cout << "Student " << i + 1 << endl;
        studs[i].displayData();
    }
}