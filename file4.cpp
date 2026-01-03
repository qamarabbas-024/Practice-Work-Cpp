/*Write a program that takes the length and width of a rectangle 
and displays its perimeter and area*/
#include<iostream>
using namespace std;
int main()
{
    float length ,width,area,perimeter ;
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
    area = length*width;
    perimeter = 2*(length * width);
    cout << "Length = " << length  <<" and Width = " <<width << endl 
    <<"Area = " <<area <<endl <<"Perimeter = " <<perimeter;  
}