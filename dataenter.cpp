#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file;
    string name;

    file.open("student.txt");

    cout << "Enter name: ";
    getline(cin, name);

    file << name;

    file.close();
    return 0;
}
