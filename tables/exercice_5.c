#include "exercice_5.h"

void orderTable(int table[], int lenTable) {
    
    int prev = 0;
    int save;
    
    do {
        for (int i = 0; i < lenTable; i++) {
            if (i > 0) {
                // If current value if lower than previous one
                if (table[i] < prev){
                    // Switch place
                    save = table[i];
                    table[i] = prev;
                    table[i - 1] = save;
                    // Don't save previous value as it has been replace to the current one
                }
                else {
                    // Save current value
                    prev = table[i];
                }
            }
            else {
                // Save the first value of the array
                prev = table[i];
            }
        }
    } while (checkOrder(table, 4) == 0); // Loop until the the array is in order
}

int checkOrder(int table[], int lenTable) {
    // Loop in the array
    for (int i = 0; i < lenTable; i++){
        // Check start at the second value as it can make the script crash
        if (i > 0){
            // If current value lower than the previous one
            if (table[i] < table[i - 1]){
                // Stop check and return 0
                return 0;
            }
        }
    }
    
    return 1;
}
