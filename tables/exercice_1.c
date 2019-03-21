#include "exercice_1.h"

int sumTable(int table[], int lenTable){
    
    int sum = 0;
    
    for (int i = 0; i < lenTable; i++) {
        sum += table[i];
    }
    
    return sum;
}
