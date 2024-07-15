#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    string course;

public:
    Student(string n, int r, string c) : name(n), roll(r), course(c) {}

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s("John Doe", 101, "Computer Science");
    s.displayDetails();
    return 0;
}
