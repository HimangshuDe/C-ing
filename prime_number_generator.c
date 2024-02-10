// #include <stdio.h>
// int main()
// {
//     int count = 0, i = 2, j;
//     while (count < 100)
//     {
//         for (j = 2; j <= i; j++)
//         {
//             if (i % j == 0)
//             {
//                 break;
//             }
//         }
//         if (j == i)
//         {
//             printf("%d ", i);
//             count++;
//         }
//         i++;
//     }
//     return 0;
// }


#include<stdio.h>

int main(){
    int range, prime_start = 2;
    printf("Enter range to generate prime no. series: ");
    scanf("%d", &range);
    
    for(int loop_var = 2; loop_var <= range; loop_var++){
        for(int inner_loop = 2; inner_loop <= loop_var; inner_loop++){
            if (loop_var % inner_loop == 0 && loop_var != inner_loop){
                break;
            }
            if (loop_var % inner_loop == 0 && loop_var == inner_loop){
                printf("%d ", loop_var);
                break;
            }
        }
    }
}