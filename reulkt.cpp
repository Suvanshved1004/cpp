#include <iostream>
#include <string>

using namespace std;

// Base class
class Student {
protected:
    string name;
    int id;

public:
    Student(string n, int i) : name(n), id(i) {}

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};

// Derived class
class ExamResult : public Student {
private:
    float score;

public:
    ExamResult(string n, int i, float s) : Student(n, i), score(s) {}

    void displayResult() {
        displayInfo(); // Accessing base class function
        cout << "Score: " << score << endl;
    }
};

int main() {
    ExamResult result("John Doe", 12345, 85.5);
    result.displayResult();

    return 0;
}
