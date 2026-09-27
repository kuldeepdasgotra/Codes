#include <iostream>
#include <string>
using namespace std;
class Person 
{
protected:
    string name;
    int age;
public:
    Person() {}
    Person(string n, int a) 
    {
        name = n;
        age = a;
    }
};

class Teacher : public Person 
{
private:
    string subject;
public:
    Teacher() {}
    Teacher(string n, int a, string sub) : Person(n, a) 
    {
        subject = sub;
    }
    void display() 
    {
        cout << "Teacher: " << name << " | Age: " << age << " | Subject: " << subject << endl;
    }
};
class ResearchScholar : public Person 
{
private:
    string researchTopic;
public:
    ResearchScholar() {}
    ResearchScholar(string n, int a, string topic) : Person(n, a) 
    {
        researchTopic = topic;
    }
    void display() 
    {
        cout << "Scholar: " << name << " | Age: " << age << " | Topic: " << researchTopic << endl;
    }
};
template <class T>
class RecordManager 
{
private:
    T records[10];
    int count;
public:
    RecordManager() 
    {
        count = 0;
    }
    void addRecord(T record) 
    {
        if (count < 10) {
            records[count] = record;
            count++;
        }
    }
    void displayAll() 
    {
        for(int i = 0; i < count; i++) 
        {
            records[i].display();
        }
    }
};
int main() 
{
    RecordManager<Teacher> teacherManager;
    teacherManager.addRecord(Teacher("ABC", 45, "Data Structures"));
    teacherManager.addRecord(Teacher("DEF", 50, "Algorithms"));
    cout << "--- Teacher Records ---\n";
    teacherManager.displayAll();
    RecordManager<ResearchScholar> scholarManager;
    scholarManager.addRecord(ResearchScholar("GHI", 26, "Machine Learning"));
    scholarManager.addRecord(ResearchScholar("JKL", 28, "Quantum Computing"));
    cout << "\n--- Research Scholar Records ---\n";
    scholarManager.displayAll();
    return 0;
}