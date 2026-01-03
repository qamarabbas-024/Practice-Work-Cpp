#include<iostream>
using namespace std;
int main()
{
    int n , reverse = 0;
    cout << "Enter n: ";
    cin >> n;
    cout << "Number before reverse = "<<n << endl;
    while(n>0)
    {int digit = n % 10;
    reverse = reverse*10+digit;
    n = n/10;
    }
    cout << "Number after reversed = "<<reverse ;
    return 0;
}