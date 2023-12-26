// In this program we'll learn how to create function in a C program

#include<stdio.h>

int myFunc(int, int); //initiating function

int main() // The main entry point of the program.
{
    int num1, num2, result;
    printf("Enter two numbers to add: ");
    scanf("%d%d", &num1, &num2);
    result = myFunc(num1, num2);
    printf("The sum of %d and %d is %d", num1, num2, result);
    return 0;

}

int myFunc(int a, int b)
{
    return a+b;
}

// NOTE: you can not create a function within a function!
// Also, if you don't want to initiate the function before the main function, then define
// your custom function just before the main function.