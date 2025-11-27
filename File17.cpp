/*Input two numbers and an operator (+, -, *, /) and print the result using switch.*/
#include<iostream>
using namespace std;
int main()
{
    float num1 ,num2 ;
    char op ;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op;
    switch(op)
    {
        case '+':
        cout << num1 <<" + " << num2 << " = " << num1+num2;
        break; 
        case '-':
        cout << num1 <<" - " << num2 << " = " << num1-num2;
        break; 
        case '*':
        cout << num1 <<" * " << num2 << " = " << num1*num2;
        break; 
        case '/':
        if(num2 != 0)
        cout << num1 <<" / " << num2 << " = " << num1/num2;
        else 
        cout << "Not possible to divide with 0 ";
        break; 
        default:
        cout << "Invalid choice: ";

    }
}