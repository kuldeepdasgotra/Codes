#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream source("source.txt");
    ofstream destination("destination.txt");
    if (!source.is_open() || !destination.is_open()) 
    {
        cout << "Error opening files." << endl;
        return 1;
    }
    char ch;
    while (source.get(ch))
    {
        destination.put(ch);
    }
    cout << "File copied successfully." << endl;
    source.close();
    destination.close();
    return 0;
}
