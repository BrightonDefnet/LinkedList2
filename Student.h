/*
 * Student
 * stores student date
 */
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student {
    public:
        Student();

        //sets
        void setGpa(float gpa);
        void setID(int id);
        void setFirst(string first);
        void setLast(string last);

        //gets
        float getGpa();
        int getId();
        string getFirst();
        string getLast();

    private:
        float _gpa;
        int _id;
        string _first;
        string _last;
};

#endif
