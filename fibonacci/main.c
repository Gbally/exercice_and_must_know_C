#include <stdio.h>

#define ITERATION 20

void fibonacci(int table[]);

int main(int argc, const char * argv[]) {
    
    int table[] = {1, 1};

    printf("[%d, %d]\n", table[0], table[1]);
    for (int i = 0; i < ITERATION; i++) {
        fibonacci(table);
        printf("[%d, %d]\n", table[0], table[1]);
    }
    
    return 0;
}

void fibonacci(int table[]) {
    
    int a = table[0];
    int b = table[1];
    
    table[0] = b;
    table[1] = a + b;
}
