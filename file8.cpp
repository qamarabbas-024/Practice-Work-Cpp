/*Write a program that asks the user to
 enter their monthly salary, then calculates their annual salary*/
 #include<iostream>
using namespace std;
int main()
{
    int monthlySalary,yearlySalary;
    cout << "Enter your Monthly Salary: ";
    cin >> monthlySalary;
    yearlySalary = monthlySalary*12;
    cout << "Your Yearly Salary = " << yearlySalary;
    
}