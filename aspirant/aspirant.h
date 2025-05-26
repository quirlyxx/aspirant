#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string specialty;

public:
    Student(string n, int a, string s)
        : name(n), age(a), specialty(s) {
    }

    void output() const {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "speciality: " << specialty << endl;
    }
};

class Aspirant : public Student {
private:
    string theme;
    string teacher;

public:
    Aspirant(string n, int a, string s, string tem, string teach)
        : Student(n, a, s), theme(tem), teacher(teach) {
    }

    void displayInfo() const {
        Student::output();
        cout << "theme: " << theme << endl;
        cout << "teacher: " << teacher << endl;
    }
};

