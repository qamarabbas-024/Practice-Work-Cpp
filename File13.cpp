#include <iostream>
using namespace std;

int main() {
    int n, key;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    bool found = false;
    int position = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            position = i;
            break; // stop after finding the first occurrence
        }
    }

    if (found)
        cout << key << " found at position " << position << endl;
    else
        cout << key << " not found in the array." << endl;

    return 0;
}