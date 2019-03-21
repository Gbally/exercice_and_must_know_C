#include <stdio.h>

#include "exercice_1.h"
#include "exercice_2.h"
#include "exercice_3.h"
#include "exercice_4.h"
#include "exercice_5.h"

int main(int argc, char *argv[]) {
    /*
     Exercice from Openclassroom - Learn C language
     https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/15540-les-tableaux
     
     Chapter about tables
     */
    
    // Exercice 1 =================================
    printf("\n====== Exercice 1 ======\n");
    // Sum every element of an array
    
    int sum;
    int table[4] = {20, 35, 91, 3};
    
    sum = sumTable(table, 4);
    printf("Sum of elements from the table: %d \n", sum); // Check
    
    
    // Exercice 2 =================================
    printf("\n====== Exercice 2 ======\n");
    // Average of all element of an array
    
    double moy;
    
    moy = averageTable(table, 4);
    printf("Moy of elements from the table: %f \n", moy); // Check
    
    
    // Exercice 3 =================================
    printf("\n====== Exercice 3 ======\n");
    // Copy elements of an array into a new array
    
    int table2[4] = {};
    
    copy(table, table2, 4);
    for (int t = 0; t < 4; t ++) { // Check
        if (table[t] != table2[t]) {
            printf("Tables are not same\n");
        }
        else {
            printf("Element are same\n");
        }
    }
    
    
    // Exercice 4 =================================
    printf("\n====== Exercice 4 ======\n");
    // Values of the array above a value given in parameters must be changed to 0
    
    maxTable(table, 4, 90);
    for (int y = 0; y < 4; y ++) { // Check
        printf("%d\n", table[y]);
    }
    
    
    // Exercice 5 =================================
    printf("\n====== Exercice 5 ======\n");
    // Ascending order the array
    
    int tableSpe[4] = {15, 81, 22, 13};
    
    orderTable(tableSpe, 4);
    for (int u = 0; u < 4; u++) { // Check
        printf("%d\n", tableSpe[u]);
    }
    
    return 0;
}
