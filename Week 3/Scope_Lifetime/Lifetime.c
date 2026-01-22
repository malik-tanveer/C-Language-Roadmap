#include <stdio.h>

// Global variable
int globalVar = 100;  // Lifetime: entire program
                       // Scope: whole program

void automaticExample() {
    int localVar = 10;  // Automatic variable
                        // Lifetime: only during this function call
                        // Scope: function only

    localVar++;
    printf("Inside automaticExample - localVar = %d\n", localVar);
}

void staticExample() {
    static int staticVar = 0;  // Static variable
                                // Lifetime: entire program
                                // Scope: this function only

    staticVar++;
    printf("Inside staticExample - staticVar = %d\n", staticVar);
}

int main() {
    printf("Global variable = %d\n\n", globalVar);

    printf(" Automatic Variable Example \n");
    automaticExample(); // 1st call
    automaticExample(); // 2nd call
    automaticExample(); // 3rd call

    printf("\n Static Variable Example \n");
    staticExample(); // 1st call
    staticExample(); // 2nd call
    staticExample(); // 3rd call

    printf("\n Global Variable Modification \n");
    globalVar++;
    printf("Modified globalVar in main = %d\n", globalVar);

    return 0;
}
