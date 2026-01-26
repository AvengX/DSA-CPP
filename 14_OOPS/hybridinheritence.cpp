#include <iostream>
using namespace std;

// Base Class
class Student {
protected:
    int rollNumber;
public:
    void getRollNumber() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }
    void putRollNumber() {
        cout << "Roll No: " << rollNumber << endl;
    }
};

// Intermediate Class 1 (Inherits from Student)
// We use 'virtual' to prevent the Diamond Problem
class Test : virtual public Student {
protected:
    float part1, part2;
public:
    void getMarks() {
        cout << "Enter Marks for Part 1: ";
        cin >> part1;
        cout << "Enter Marks for Part 2: ";
        cin >> part2;
    }
    void putMarks() {
        cout << "Marks obtained:" << endl;
        cout << "Part 1 = " << part1 << endl;
        cout << "Part 2 = " << part2 << endl;
    }
};

// Intermediate Class 2 (Inherits from Student)
// We use 'virtual' here as well
class Sports : virtual public Student {
protected:
    float score;
public:
    void getScore() {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
    void putScore() {
        cout << "Sports Score: " << score << endl;
    }
};

// Derived Class (Inherits from both Test and Sports)
class Result : public Test, public Sports {
    float total;
public:
    void display() {
        total = part1 + part2 + score;
        putRollNumber();
        putMarks();
        putScore();
        cout << "Total Score: " << total << endl;
    }
};

int main() {
    Result res;
    
    // Calling functions from all inherited levels
    res.getRollNumber(); // From Student
    res.getMarks();      // From Test
    res.getScore();      // From Sports
    
    cout << "\n-------------------\n";
    cout << "   Student Result  \n";
    cout << "-------------------\n";
    
    res.display();
    
    return 0;
}