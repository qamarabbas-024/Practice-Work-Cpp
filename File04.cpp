/* Input age and print if the person is eligible to vote (18 or older).*/
#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout << "Enter your age: ";
    cin >> age;
    if (age >=18)
    cout << "You are eligible to vote";
    else 
    cout << "You are not eligible to vote";
}