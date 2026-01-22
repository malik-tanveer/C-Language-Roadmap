#include <stdio.h>

// Global variable
int globalVar = 100;

void automaticExample() {
    int localVar = 10;  // Automatic variable

    localVar++;
    printf("Inside automaticExample - localVar = %d\n", localVar);
}

void staticExample() {
    static int staticVar = 0;  // Static variable

    staticVar++;
    printf("Inside staticExample - staticVar = %d\n", staticVar);
}

int main() {
    printf("Global variable = %d\n\n", globalVar);

    printf(" Automatic Variable Example \n");
    automaticExample(); 
    automaticExample(); 
    automaticExample(); 

    printf("\n Static Variable Example \n");
    staticExample(); 
    staticExample(); 
    staticExample(); 

    printf("\n Global Variable Modification \n");
    globalVar++;
    printf("Modified globalVar in main = %d\n", globalVar);

    return 0;
}
