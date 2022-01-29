#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

Node* newStudent();
Node* add(Node* head);
Node* print(Node* next, Node* head);

int main() {
    Node* head = NULL;
    bool running = true;
    while (running) {
        string result;
        cout << "what would you like to do?\nadd\nquit" << endl;
        cin >> result;
        result = "add";

        if (result == "add") { //add a new student
            head = add(newStudent());
        }
        //} else if (result == "quit") { //quit the program
            //running = false;
            //break;

        //} else { //error handler
            //cout << "not a command" << endl;
        //}
    }
}

//create a new student
Node* newStudent() {
    Student stu;
    float gpa;
    int id;
    string first;
    string last;
    cout << "enter gpa" << endl;
    cin >> gpa;
    cout << "enter id" << endl;
    cin >> id;
    cout << "enter first name" << endl;
    cin >> first;
    cout << "enter last name" << endl;
    cin >> last;
    stu.setGpa(gpa);
    stu.setID(id);
    stu.setFirst(first);
    stu.setLast(last);
    Node head = Node(&stu);
    Node* ptr = &head;
    return ptr;
}

//add a student to the registry
Node* add(Node* head) {
    Node* current = head;
    if (current == NULL) {
        head = newStudent();
        return head;
    } else {
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        current->setNext(newStudent());
        return head;
    }
}

//print student info
