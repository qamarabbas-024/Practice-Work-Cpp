#include<iostream>
using namespace std;
int main()
{
   int n , reminder ,reversed = 0;
   cout << "Enter a number:";
   cin >> n;
   while(n!=0)
   {
    reminder = n%10 ;
    reversed = reversed * 10 + reminder ;
    n = n/10 ; 
   }
   cout << "Reversed = " << reversed ;
}