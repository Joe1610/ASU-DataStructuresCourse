#include "Student.h"
#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
    total = 0;
}

void Student::readData() {
    cout << "ID: ";
    cin >> ID;
    for (int i = 0; i < 3; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void Student::sumData() {
    for (int i = 0; i < 3; i++) {
        total += marks[i];
    }
}

void Student::displayData() {
    cout << total << endl;
}
Student::~Student() {
    cout << "Object deleted";
}
