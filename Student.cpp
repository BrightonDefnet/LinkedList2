#include "Student.h"

Student::Student(){}

//sets
void Student::setGpa(float gpa) {
    _gpa = gpa;
}
void Student::setID(int id) {
    _id = id;
}
void Student::setFirst(string first) {
    _first = first;
}
void Student::setLast(string last) {
    _last = last;
}

//gets
float Student::getGpa() {
    float gpa = _gpa;
    return gpa;
}
int Student::getId() {
    int id = _id;
    return id;
}
string Student::getFirst() {
    string first = _first;
    return first;
}
string Student::getLast() {
    string last = _last;
    return last;
}
