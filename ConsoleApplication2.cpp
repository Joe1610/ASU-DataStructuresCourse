// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Stack.h"
#include "Queue.cpp"
using namespace std;

struct Task {
    string taskName="";
    int taskID = 0;
};
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

    /*
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
    */

    // Lab 3
    Queue<Task> queue(10);
    while (1) {
        cout << "******* Welcome to task organizer *******" << endl;
        cout << "To Add new task press 1\n";
        cout << "To Remove a task press 2\n";
        cout << "To Exit press 3\n";
        Task task;
        int num;
        cin >> num;
        switch (num) {
        case 1: {
            cout << "Enter Task ID\n";
            cin >> task.taskID;
            cout << "Enter Task Name\n";
            cin >> task.taskName;
            queue.Enqueue(task);
            break;
        }
        case 2: {
            cout << "Task ID: ";
            cout << queue.Front().taskID << endl;
            cout << "Task Name: ";
            cout<<queue.Front().taskName<<endl;
            queue.Dequeue();
            break;
        }
        case 3: {
            return 0;
        }
        default: {
            break;
        }
        }
    }



}