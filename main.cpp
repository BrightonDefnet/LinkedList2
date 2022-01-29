#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

Node* add(Node* head);
void print(Node* next, Node* head);

int main() {
    Node* head = NULL;
    bool running = true;
    while (running) {
        string result;
        cout << "what would you like to do?\nadd\nquit" << endl;
        cin >> result;

        if (result == "add") { //add a new student
            head = add(head);
            print(head, head);
        } else if (result == "quit") { //quit the program
            running = false;
            break;

        } else { //error handler
            cout << "not a command" << endl;
        }
    }
}

//add a student to the registry
Node* add(Node* head) {
    Node* current = head;
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
        Student stu;
        stu.setFirst(first);
        stu.setLast(last);
        stu.setGpa(gpa);
        stu.setID(id);
    if (current == NULL) {
        head = new Node(&stu);
        return head;
    } else {
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        Node* node = new Node(&stu);
        current->setNext(node);
        return head;
    }
}

//print student info
void print(Node* next, Node* head) {
    if (next != NULL) {
        Student* temp = next->getStudent();
        cout << "\n" << temp->getFirst() << " " << temp->getLast() << endl;
        cout << "gpa: " << temp->getGpa() << endl;
        cout << "id: " << temp->getId() << endl;
        print(next->getNext(), head);
    }
}
