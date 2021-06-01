// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Stack.h"
#include "Queue.cpp"
using namespace std;

int main()
{
    /*
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
    */

    /*
    // Lec 2
    cout << "Enter no of cards: ";
    int num;
    cin >> num;
    Stack stack(num);
    char type;
    for (int i = 0; i < num; i++) {
        cin >> type;
        if (type == 'W') {
            stack.push(5);
        }
        else if (type == 'D') {
            stack.push(10);
        }
        else if (type == 'C') {
            stack.pop();
        }
        else if (type == 'S') {
            stack.pushSumOfLastTwo();
        }
    }
    stack.getSum();
    */

    /*
    // Lab 2
    Stack stack;
    cout << "Enter a decimal number: ";
    int num;
    cin >> num;
    while (num) {
        stack.push(num % 2);
        num /= 2;
    }
    cout << "The binary representaion: ";
    while (!stack.isEmpty()) {
        cout<<stack.pop();
    }
    cout << endl;
    */

    // Lec 3
    int num;
    while (cin >> num) {
        if (!num) break;
        Queue<int> queue(num);
        for (int i = 1; i <= num; i++) {
            queue.Enqueue(i);
        }
        cout << "Discarded cards: ";
        while (queue.size() > 1) {
            cout << queue.Front() << ' ';
            queue.Dequeue();
            int tmp = queue.Front();
            queue.Dequeue();
            queue.Enqueue(tmp);
        }
        cout << endl;
        cout << "Remaining card: " << queue.Front() << endl;
    }

}