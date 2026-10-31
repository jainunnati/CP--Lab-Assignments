#include <stdio.h>

int main()

{
    
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 7 == 0) {

        printf("The number is divisible by 7\n");

    } 
    
    else {
        printf("The number is not divisible by 7\n");
    }
    
    return 0;
}