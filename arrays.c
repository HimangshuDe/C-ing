// Simple program to demonstrate implementation of arrays in C.

# include <stdio.h>

int main(){
    int my_arr[10], i; //declaration of an array!
    // Now taking user inputs to add elements into the array, using for loop
    for (i=0; i<10;i++){
        printf("Enter number to add into array: ");
        scanf("%d", &my_arr[i]);
    }

    // Displaying array elements
    printf("Items in the array are: ");
    for (i=0;i<10;i++){
        printf("%d ", my_arr[i]);
    }

    return 0;

}