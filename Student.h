#pragma once
class Student{
private:
    int ID, total;
    double marks[3];

public:
    Student();
    void readData();
    void sumData();
    void displayData();
    ~Student();
};

