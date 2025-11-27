/* Input x and y coordinates of a point and print which quadrant it 
lies in.*/
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout << "Enter Value of x: ";
    cin >> x ;
    cout << "Enter Value of y: ";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout <<x << " and " << y << " lies is first quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout <<x << " and " << y << " lies is second quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout <<x << " and " << y << " lies is third quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout <<x << " and " << y << " lies is fourth quadrant";
    }
    else if (x == 0 && y == 0)
    {
    cout <<x << " and " << y << " lies at origion";
    }
}