#include <iostream>
#include <string>
using namespace std;
class Book 
{
private:
    int bookID;
    string bookName;
    float price;

public:
    static int totalBooks;
    Book(int id, string name, float p) 
    {
        bookID = id;
        bookName = name;
        price = p;
        totalBooks++;
    }
    float getPrice() 
    {
        return price;
    }
    inline void displayDiscountPrice() 
    {
        float discounted = price - (price * 0.10);
        cout << "Discounted Price = " << discounted << endl;
    }
    bool operator>(Book b) 
    {
        if (price > b.price) 
        {
            return true;
        } else 
        {
            return false;
        }
    }
    friend void displayCostlierBook(Book b1, Book b2);
};
int Book::totalBooks = 0;
void displayCostlierBook(Book b1, Book b2) 
{
    cout << "\nCostlier Book:" << endl;
    if (b1 > b2) 
    {
        cout << "ID: " << b1.bookID << endl;
        cout << "Name: " << b1.bookName << endl;
        cout << "Price: " << b1.price << endl;
        cout << "\nTotal Books = " << Book::totalBooks << endl;
        b1.displayDiscountPrice();
    } else 
    {
        cout << "ID: " << b2.bookID << endl;
        cout << "Name: " << b2.bookName << endl;
        cout << "Price: " << b2.price << endl;
        cout << "\nTotal Books = " << Book::totalBooks << endl;
        b2.displayDiscountPrice();
    }
}
int main() 
{
    Book book1(101, "Introduction to C", 500);
    Book book2(102, "C++ Programming", 700);
    cout << "Book 1 Price = " << book1.getPrice() << endl;
    cout << "Book 2 Price = " << book2.getPrice() << endl;
    displayCostlierBook(book1, book2);
    return 0;
}