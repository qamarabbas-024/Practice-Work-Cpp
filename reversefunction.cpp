#include<iostream>
using namespace std;
int Reverse(int num)
{
    int reverse = 0;
    while(num!=0)
{
    reverse = reverse * 10 + (num%10);
    num = num/10;
}
  return reverse;
}
int main()
{
    int num;
    cout <<"Enter Value: ";
    cin >> num;
    int reverse = Reverse(num);
    cout << "Reverse num = " <<reverse;
    return 0;
}