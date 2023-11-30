// Writing loops in C

#include <stdio.h>

int main(){
    int loop=10, i;
    for (i=0;i<loop;i++) // for loop implementation
    {
        printf("%d\n", i);
    }

    printf("\n");
    i=0;
    
    while (i<loop) // while loop implementation
    {
        printf("%d\n", i);
        i++;
    }

    printf("\n");
    i=0;

    do // do-while implementation
    {
        printf("%d\n", i);
        i++;
    } while (i<loop);
    
}