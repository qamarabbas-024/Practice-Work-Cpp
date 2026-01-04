#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter value of n: " ;
    cin >> n;
    int array[n];
    cout << "Enter "<< n << " values: ";
    for(int i = 0; i<n;i++)
    {
        cin>> array[i];
    }
    int largest = array[0];
    for(int i=0;i<n;i++)
    {
        if(array[i]>largest)
        {
            largest = array[i];
        }
    }
     cout << "Largest number = "<< largest ;
    return 0;
}
