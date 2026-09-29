#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream inFile("article.txt");
    if (!inFile.is_open()) 
    {
        cout << "Error: Could not open article.txt" << endl;
        return 1;
    }
    int chars = 0, words = 0, lines = 0;
    char ch;
    bool inWord = false;
    while (inFile.get(ch)) 
    {
        chars++;
        if (ch == '\n') 
        {
            lines++;
        }
        if (isspace(ch)) 
        {
            inWord = false;
        } else if (!inWord) 
        {
            inWord = true;
            words++;
        }
    }
    if (chars > 0 && ch != '\n') 
    {
        lines++;
    }
    cout << "Characters: " << chars << endl;
    cout << "Words: " << words << endl;
    cout << "Lines: " << lines << endl;
    inFile.close();
    return 0;
}
