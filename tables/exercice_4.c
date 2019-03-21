#include "exercice_4.h"

void maxTable(int table[], int lenTable, int maxValue) {
    
    for (int i = 0; i < lenTable; i ++) {
        if (table[i] > maxValue) {
            table[i] = 0;
        }
    }
}
