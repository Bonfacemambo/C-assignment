#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    string name;
    int age;
    string course;
public:
    Student(string n, int a, string c) {
        name = n;
        age = a;
        course = c;
    }
    virtual void display() {
        cout << "Name of student: " << name << endl;
        cout << "Age of student: " << age << endl;
        cout << "Course: " << course << endl;
    }
};


class ICTStudent : public Student {
protected:
    string program;
    string stage;
public:
    ICTStudent(string n, int a, string p, string s)
        : Student(n, a, "ICT"), program(p), stage(s) {}
    void display() {
        cout << "Name of student: " << name << endl;
        cout << "Age of student: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Program: " << program << endl;
        cout << "Stage: " << stage << endl;
    }
};


class Certificate : public ICTStudent {
public:
    Certificate(string n, int a, string p, string s)
        : ICTStudent(n, a, p, s) {}
};

class Diploma : public ICTStudent {
public:
    Diploma(string n, int a, string p, string s)
        : ICTStudent(n, a, p, s) {}
};

class Degree : public ICTStudent {
public:
    Degree(string n, int a, string p, string s)
        : ICTStudent(n, a, p, s) {}
};


class LawStudent : public Student {
public:
    LawStudent(string n, int a) : Student(n, a, "Law") {}
};

class BusinessStudent : public Student {
public:
    BusinessStudent(string n, int a) : Student(n, a, "Business") {}
};

int main() {

    Student* s1 = new Certificate("Manuel perez", 34, "ICT", "Stage 2");
    Student* s2 = new Diploma("Lewis Hamilton", 20, "ICT", "Stage 3");
    Student* s3 = new Degree("Lando  Norris", 27, "ICT", "Stage 1");
    Student* s4 = new LawStudent("Jack Grojean", 25);
    Student* s5 = new BusinessStudent("Esteban Ocon", 30);

    // Student information to be displayed
    s1->display();
    cout << endl;
    s2->display();
    cout << endl;
    s3->display();
    cout << endl;
    s4->display();
    cout << endl;
    s5->display();
    cout << endl;


    return 0;
}
