#include <stdio.h>

int main()
{
    // input is  the process of accepting data from a user or an external source (like a file) for the program to process

    // You give a user to enter a some data like login email and password and you used a scanf()

    printf("This work is give a user info\n");

    int age;
    printf("Enter your age : ");
    scanf("%d", &age); // you decalre a complete this %d is a simpel work age decalre adn &age is sign & a address bar define a this varuable address this and name this &varaible name
    
    float marks;
    printf("Enter your Sunject Mark's : ");
    scanf("%f", &marks);
    printf("Your age is : %d\n", age);
    printf("Your Marks is : %f\n", marks);
    return 0;
}