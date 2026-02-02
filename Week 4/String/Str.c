#include <stdio.h>
#include <string.h>

int main()
{
    // strlen() String Length

    char name[] = "Hamza";
    printf("%zu\n", strlen(name));

    // strcpy() String Copy
    char source[] = "Hello, World!";
    char destination[50];

    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    // strcat() String Concatenation
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // strcmp() — string compare
    char string1[] = "Apple";
    char string2[] = "Apaple";
    if (strcmp(string1, string2) == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    // Practice Set

    char user[100];
    printf("Hello Please Enter Your Name : ");
    scanf("%s", &user); // Taking input from user
    printf("Hello, %s Welcome!\n", user);
    printf("Length of your name is : %zu\n", strlen(user));

    char name1[5];
    gets(name1);
    printf("You Entered : ");
    puts(name1);
    

    return 0;
}