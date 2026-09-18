#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNo;
    float marks[5];

public:
    Student() 
    {
        cout << "Enter student name: ";
        getline(cin, name);
        
        cout << "Enter roll number: ";
        cin >> rollNo;
        
        cout << "Enter marks for 5 subjects (out of 100): " << endl;
        for (int i = 0; i < 5; i++) 
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    float calculateTotalMarks() 
    {
        float total = 0;
        for (int i = 0; i < 5; i++) 
        {
            total += marks[i];
        }
        return total;
    }
    float calculatePercentage() 
    {
        return (calculateTotalMarks() / 500.0) * 100.0;
    }
    char determineGrade() {
        float percentage = calculatePercentage();
        
        if (percentage >= 90) {
            return 'A';
        } else if (percentage >= 75) {
            return 'B';
        } else if (percentage >= 60) {
            return 'C';
        } else if (percentage >= 40) {
            return 'D';
        } else {
            return 'F';
        }
    }
    void displayResult() {
        cout << "   Student result   " << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll No     : " << rollNo << endl;
        cout << "Total Marks : " << calculateTotalMarks() << " / 500" << endl;
        cout << "Percentage  : " << calculatePercentage() << "%" << endl;
        cout << "Grade       : " << determineGrade() << endl;
    }
};
int main() {
    Student S1;
    S1.displayResult();
    return 0;
}
