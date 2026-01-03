/*Write a program that asks the user for the distance and time
, then calculates speed = distance / time.*/
#include<iostream>
using namespace std;
int main()
{
    float distance,time, speed;
    cout << "Enter Distance and Time: ";
    cin >> distance >> time ;
    speed = distance / time;
    cout << "Speed = " <<speed;
}