#include <iostream>

using namespace std;

int search(int number);

int numbers[10] = {45, 32, 56, 32, 67, 12, 87, 67, 78, 90};

int main()
{
    int number, index=0;
    
    cout<<"Enter Number: ";
    cin>> number;
    
    index = search(number);
    
    if (index == 0) {
        cout<<"Not Found";
    } else {
        cout<<"Found at index " << index;
    } 
    
    return 0;
}

int search(int number) {
    int index=0;
    
    for (int i=0; i<10; i++) {
        if (numbers[i] == number) {
            index = i+1;
            break;
        }
    }
    
    return index;
}
