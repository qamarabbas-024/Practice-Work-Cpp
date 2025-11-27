/*Input marks (0–100) and print grades:
o 90–100 → A
o 80–89 → B
o 70–79 → C
o 60–69 → D
o Below 60 → F*/
#include<iostream>
using namespace std;
int main()
{
 int marks;
 cout << "Enter Marks: ";
 cin >> marks ;
 if(marks >= 90)
 {
    cout << "Your grade is A ";
 }
 else if(marks >= 80)
 {
    cout << "Your grade is B ";
 }
 else if(marks >= 70)
 {
    cout << "Your grade is C ";
 }
 else if(marks >= 60)
 {
    cout << "Your grade is D ";
 }
 else
 cout << "You got an F kido ";
}