#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ofstream inputFile("students.txt");
    int rollno;
    string name;
    float marks;
    
    cout << "Enter Roll Number, Name, and Marks: ";
    cin >> rollno >> name >> marks;
    
    if (inputFile.is_open()) 
    {
        inputFile << rollno << " " << name << " " << marks << endl;
        cout << "Data successfully saved into students.txt." << endl;
        inputFile.close();
    } 
    else 
    {
        cout << "Error opening file." << endl;
    }
    return 0;
}
