/* Input a number and determine if it’s positive, negative, 
or zero.*/
#include<iostream>
using namespace std;
int main()
{
   int n ;
   cout << "Enter a Number: ";
   cin >> n;
   if(n>0)
   {
    cout << n << " is a positive number";
   }
   else if (n<0)
   {
    cout << n << " is a negative number";
   }
   else 
   cout << "The number is zero";
}