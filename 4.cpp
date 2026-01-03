#include <iostream>
using namespace std;

/**
 * @brief Calculates the sum of all even numbers from 0 up to a specified integer.
 * @param limit The upper bound (inclusive) for the calculation.
 * @return int The total sum of even numbers.
 */
int sumEven(int limit) {
    
    // 1. Create a variable to store the running total.
    int sum = 0;

    // 2. Loop from 0 up to the limit.
    //    We start at 0 and increment by 2 in each step.
    //    This is efficient because it only loops over the even numbers.
    for (int i = 0; i <= limit; i += 2) {
        
        // 3. Add the current even number (i) to the sum.
        sum += i;
    }

    // 4. Return the final calculated sum.
    return sum;
}

// --- Main function to test the code ---
int main() {
    cout << "--- Q4: Function for Sum of Even Numbers ---" << endl;
    
    // Example 1: limit = 10
    // Even numbers: 0 + 2 + 4 + 6 + 8 + 10 = 30
    int test_limit_1 = 10;
    int result_1 = sumEven(test_limit_1);
    cout << "The sum of even numbers up to " << test_limit_1 << " is: " << result_1 << endl; 
    
    // Example 2: limit = 7
    // Even numbers: 0 + 2 + 4 + 6 = 12
    int test_limit_2 = 7;
    int result_2 = sumEven(test_limit_2);
    cout << "The sum of even numbers up to " << test_limit_2 << " is: " << result_2 << endl; 
    
    return 0;
}