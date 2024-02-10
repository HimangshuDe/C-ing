// In this program we'll find the prime and composite number

#include <stdio.h>

int main(){
    int user_num;
    printf("Enter number to check: ");
    scanf("%d", &user_num);
    
    if (user_num == 1 || user_num == 0){
        printf("The number is neither prime nor composite.");
    }
    else{
        for (int i=2; i <= user_num; i++){
            
            if (user_num %i ==0 && user_num != i)
            { 
                printf("%d is a composite number.", user_num);
                break;
            }
            
            if(i == user_num && user_num %i == 0){
                printf("%d is a prime number.", user_num);
                break;
            }
        }
    }
    return 0;
}