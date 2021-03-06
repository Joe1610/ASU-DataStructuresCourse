// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "Stack.h"
#include "Queue.cpp"
#include "ArrayList.cpp"
#include "Course.cpp"
#include "BinarySearchTree.cpp"
#include "TreeNode.cpp"
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

    /*
    // Lab 3
    Queue<Task> queue(10);
    bool valid = 1;
    while (valid) {
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
            valid = 0 ;
            break;
        }
        default: {
            break;
        }
        }
    }
    */

    /*
    // Lab 4
    ArrayList<Course> arr;
    bool valid = 1;
    while (valid) {
        cout << "Press 1 to Add Course\nPress 2 to Display Total Students\nPress 3 to Exit\n";
        int num;
        cin >> num;
        switch (num)
        {
        case 1: {
            Course course;
            course.readData();
            arr.Append(course);
            break;
        }
        case 2: {
            int total = 0;
            for (int i = 0; i < arr.length(); i++) {
                total += arr.at(i).getNoOFStudents();
            }
            cout << "Total = " << total << endl;
            break;
        }
        case 3: {
            valid = 0;
            break;
        }
        default:
            break;
        }

    }
    */
    
    // Lab 7
    BinarySearchTree<int> BST;
    BST.insert(10);
    BST.insert(5);
    BST.insert(15);
    BST.insert(25);
    cout << BST.getLevel(100) << endl;
    if (BST.find(7)) {
        cout << "Found 7\n";
    }
    else {
        cout << "Not Found\n";
    }
    if (BST.find(10)) {
        cout << "Found 10\n";
    }
    else {
        cout << "Not Found\n";
    }
    return 0;
}
