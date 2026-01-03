#include <iostream>
using namespace std;

int main() {
    
    // This variable controls the entire program's loop
    int continue_program = 1; 

    // A 'do-while' loop ensures the program runs at least once
    do {
        // --- 1. Initialize variables for a new calculation ---
        int number = 0; // Stores the number the user enters
        int sum = 0;    // Accumulates the total sum
        int count = 0;  // Counts how many positive numbers were entered
        double average = 0.0; // Stores the final average

        cout << "\n--- New Calculation ---" << endl;
        cout << "Enter a series of positive integers." << endl;
        cout << "Enter a negative number to stop and see results." << endl;
        
        // --- 2. Inner loop for getting numbers ---
        cout << "Enter number: ";
        cin >> number; // Get the first number

        // Loop as long as the number is not negative
        while (number >= 0) {
            sum += number;  // Add the number to the sum
            count++;        // Increment the count
            
            cout << "Enter number: "; // Ask for the next number
            cin >> number;
        }

        // --- 3. Display the results ---
        cout << "\n--- Results ---" << endl;
        if (count > 0) {
            // We must cast 'sum' to a 'double' for correct decimal division
            average = (double)sum / count; 
            
            cout << "Total Sum: " << sum << endl;
            cout << "Numbers Entered: " << count << endl;
            cout << "Average: " << average << endl;
        } else {
            // This happens if the user enters a negative number first
            cout << "No positive numbers were entered." << endl;
        }
        
        // --- 4. Ask to continue or exit ---
        cout << "\nDo you want to continue?" << endl;
        cout << "Enter 1 to continue or 0 to exit: ";
        cin >> continue_program;

    } while (continue_program == 1); // If user entered 1, loop again

    cout << "\nProgram terminated. Goodbye!" << endl;
    return 0;
}