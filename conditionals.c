//Writing a program to show the implementation of conditionals in C.

# include <stdio.h>

int main(){
    int user_number;

    printf("Enter a number: ");
    scanf("%d", &user_number);

    int runtime_opt = user_number;

    // Using if else conditionals
    if (user_number>15)
        printf("The number is greater than 15.");
    else
        printf("The number is %d", user_number);


    // Using if-else if-else conditional.
    if (user_number % 20 == 0){
        printf("The number is divisible by 20");
    }
    
    else if (user_number %5 == 0){
        printf("The number is divisible by 5");
    }
    
    else
        printf("I don't know the number, man!");


    // Using switch case conditional.
    switch (runtime_opt)
    {
    case 30:
        printf("Number is 30.");
        break;
    case 25:
        printf("Number is less than 30.");
    default:
        printf("The number is %d", runtime_opt);
        break;
    }
    
    return 0;
}