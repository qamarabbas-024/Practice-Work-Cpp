/*Write a program to find the factorial of a number using loop.*/
#include<iostream>
using namespace std;
int main()
{
   int n ,i, factorial = 1;
   cout << "Enter Value of n:";
   cin >> n;
   if(n<0){
   cout << "Sorry factorial is not possible for nagative numbers:"<< endl;
}
   else{
   for(i=1;i<=n;i++)
   {
    factorial *= i;
   }
    cout << "Factorial of " << n <<" = "<<factorial;
   }
}