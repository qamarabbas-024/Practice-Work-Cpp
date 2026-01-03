#include <iostream>
using namespace std;

/**
 * @brief Generates and displays a box made of asterisks (*).
 * @param rows The height of the box.
 * @param columns The width of the box.
 */
void drawBox(int rows, int columns) {
    
    // 1. Outer loop: Iterates through each row (from top to bottom)
    for (int i = 1; i <= rows; ++i) {
        
        // 2. Inner loop: Iterates through each column (from left to right)
        for (int j = 1; j <= columns; ++j) {
            
            // 3. The "border" logic:
            // Print "*" if we are on:
            // - The first row (i == 1)
            // - The last row (i == rows)
            // - The first column (j == 1)
            // - The last column (j == columns)
            if (i == 1 || i == rows || j == 1 || j == columns) {
                cout << "*";
            } else {
                // 4. If not on a border, print a space for the "hollow" part
                cout << " ";
            }
        }
        
        // 5. After finishing one full row, move to the next line
        cout << endl;
    }
}

// --- Main function to test the code ---
int main() {
    cout << "--- Q5: Function to Draw a Box ---" << endl;
    
    // Example from the paper (looks like 5 rows, 20 columns)
    int box_rows = 5;
    int box_cols = 20;
    
    cout << "Drawing a " << box_rows << "x" << box_cols << " box:" << endl;
    drawBox(box_rows, box_cols);
    
    cout << "\nDrawing a 7x10 box:" << endl;
    drawBox(7, 10); // Another example
    
    return 0;
}