#include "exercice_2.h"

double averageTable(int table[], int lenTable) {
    
    double moy = 0;
    int sum = 0;
    
    for (int i = 0; i < lenTable; i ++) {
        sum += table[i];
    }
    
    moy = sum / lenTable;
    
    return moy;
}
