#include <stdio.h>

int main()
{
    // String Initialization

    // char name[] = "Ali"; // null character '\0' is added automatically
    // s[0] = 'h'; // crash

    // char name[4] = "Ali"; // correct way
    // char name[3] = "Ali"; // wrong way, no space for null


    // Single Char print and used a single quote
    char charcter = 'A';
    printf("Character: %c\n", charcter);

    char name[] = "Hamza";
    printf("Name: %s\n", name);

    // Using 2D Arrays of Strings
    // char names[3][5] = {
    //     "Ali\t",
    //     "Ahmed\t",
    //     "Sara"
    // };

    // This is the best Correct to Initalize
    char *names[] = {
        "Ali",
        "Ahmed",
        "Sara"
    };
    printf("%s\n", names[0]);
    printf("%s\n", names[1]);
    printf("%s\n", names[2]);

    return 0;
}