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
    int key;
    bool found = false;
    cout<< "Enter key to find: ";
    cin >> key;
    for(int i=0;i<n;i++)
    {
        if(array[i] == key)
       { cout << "Key found at "<< i;
        found = true;
        break;
       }        
    }
         if(found == false)
        cout<< "Key not found ";   
        return 0;

}