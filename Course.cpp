#include <iostream>
using namespace std;

class Course {
	string name;
	int noOfStudents;
public:
	Course() {
		noOfStudents = 0;
	}
	void readData() {
		cout << "Enter course data: ";
		cin >> name >> noOfStudents;
	}

	int getNoOFStudents() {
		return noOfStudents;
	}
};