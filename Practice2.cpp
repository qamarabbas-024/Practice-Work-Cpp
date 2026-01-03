#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int num,max;
    cout <<"Enter 10 Numbers:"<<endl;
    cin >> num ;
    max = num;
    for(int i=1;i<n;i++)
    {
        cin >> num;
        if(num > max)
        max = num;
    }
    
    cout << "MAX:"<< max ;
}