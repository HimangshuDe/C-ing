#include <stdio.h>

int main()
{
    // Pointer arithmetic
    // dereferencing a pointer and incrementing it
    int a = 10;
    int *ptra = &a;
    printf("value of a before incrementing by 1 is %d\n", *ptra);
    printf("address of a is %p\n", ptra);
    *ptra += 1;

    printf("value of a after incrementing by 1 is %d\n", *ptra);
    printf("address of a is %p\n", ptra);
    printf("\n");
    printf("Address of ptra variable: %p\n", &ptra);
    return 0;
}