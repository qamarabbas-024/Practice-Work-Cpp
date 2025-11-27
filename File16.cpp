/*: Input day number (1–7) and print “Weekday” or “Weekend” using switch.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter a Number between 1-7: ";
    cin >> n;
    switch(n)
    {
        case 1 :
        cout << "Monday is a weekday ";
        break;
        case 2 :
        cout << "Tuesday is a weekday ";
        break;
        case 3 :
        cout << "Wednesday is a weekday ";
        break;
        case 4 :
        cout << "Thursday is a weekday ";
        break;
        case 5 :
        cout << "Friday is a weekday ";
        break;
        case 6 :
        cout << "Saturday is a weekend ";
        break;
        case 7 :
        cout << "Sunday is a weekend ";
        break;
        default:
        cout << "Invalid choice";

    }
}