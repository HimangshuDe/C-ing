// Pointers

#include<stdio.h>

int main(){
    int a=7;
    int *ptra = &a;
    int *ptr2 = NULL; // NULL Pointer
    
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a(stored in and accessed from pointer) is %p\n", ptra);
    printf("The address of a is %p\n", &a);
    printf("The value of a(accessed from pointer) is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    printf("\n");
    printf("The address of some garbage is %p\n", ptr2);
    return 0;

}