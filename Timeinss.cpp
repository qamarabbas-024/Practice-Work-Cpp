#include<iostream>
using namespace std;
int main()
{
    int hh,mm,ss;
    char c1,c2;
    cout << "Enter Value in hh:mm:ss ";
    cin >>hh>>c1>>mm>>c2>>ss ;
    ss =(hh*3600)+(mm*60)+ss;
    cout << "Total Time in Seconds " << ss;
}
