#include <iostream>
#include <string>
using namespace std;
class Book 
{
public:
    int bookID;
    string title;
    int copies;
    Book(int id, string t, int c) 
    {
        bookID = id;
        title = t;
        copies = c;
    }
    void exchange(Book &other) 
    {
        int tempID = bookID;
        string tempTitle = title;
        int tempCopies = copies;

        bookID = other.bookID;
        title = other.title;
        copies = other.copies;

        other.bookID = tempID;
        other.title = tempTitle;
        other.copies = tempCopies;
    }
    void display() 
    {
        cout << "ID: " << bookID << ", Title: " << title << ", Copies: " << copies << endl;
    }
};
Book findMoreCopies(Book b1, Book b2) 
{
    if (b1.copies > b2.copies) return b1;
    return b2;
}
int main() 
{
    Book b1(1, "C++ Basics", 5);
    Book b2(2, "Advanced C++", 10);
    cout<<"Books in stock:"<<endl;
    b1.display();
    b2.display();
    cout<<"---------------------------------------------------"<<endl;
    b1.exchange(b2);
    cout << "After exchange book1 is: "; b1.display();
    Book more = findMoreCopies(b1, b2);
    cout << "\nBook with more copies: " << more.title << endl;
    return 0;
}