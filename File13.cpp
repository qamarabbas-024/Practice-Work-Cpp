/*Display a menu with 4 options (Add, Subtract, Multiply, Divide). Input 
choice and two numbers, perform the operation using switch.*/
#include<iostream>
using namespace std;
int main()
{
    int choice;
    float num1 ,num2;
    cout << " === Menu === "<< endl;
    cout << "1. Add " << endl;
    cout << "2. Substract " << endl;
    cout << "3. Multiply "<< endl;
    cout << "4. Divide " << endl;
    cout << "Enter your chocie: ";
    cin >> choice ;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    switch(choice)
    {
        case 1:
        cout << num1 << " + " << num2 << " = " << num1 + num2 ;
        break;
        case 2:
        cout << num1 << " - " << num2 << " = " << num1 - num2 ;
        break;
        case 3:
        cout << num1 << " * " << num2 << " = " << num1 * num2 ;
        break;
        case 4:
        if(num2 != 0)
       cout << num1 << " / " << num2 << " = " << num1 / num2 ;
      else
      cout << "it is not possible to divide with 0"; 
      break;
       default:
       cout << "Invalid choice";
    }
}