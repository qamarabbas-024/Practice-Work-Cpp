/*Write a program that takes the marks of 5 
subjects and calculates the total marks and percentage.*/
#include<iostream>
using namespace std;
int main()
{
    float num1,num2,num3,num4,num5,totalMarks,Percentage;
    cout << "Enter Numbers of Five Subjects:\n ";
    cin >> num1 >>num2>>num3>>num4>>num5;
    totalMarks = num1+num2+num3+num4+num5;
    Percentage = (totalMarks/500)*100;
    cout << "TotalMarks = " << totalMarks <<endl << "Percentage = "<<Percentage;
}