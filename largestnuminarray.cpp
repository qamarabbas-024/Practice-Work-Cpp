#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter size of array: ";
    cin >> n;
    int array[n];
    cout << "Enter " << n <<" values in array: "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>> array[i];
    }
    int largest = array[0];
    for(int i = 1;i<n;i++)
    {
        if (array[i]>largest)
        largest = array[i];
    }
    cout << "Largest = "<< largest;
}