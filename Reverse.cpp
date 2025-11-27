#include<iostream>
using namespace std;
int main()
{
    int num = 12345 , reverse = 0;
    cout <<"Original number = " << num<<endl;
    while(num)
    {
        reverse = reverse *10 + num % 10;
        num = num/10;
    }
    cout<< "Reversed number = "<<reverse;
}