#include <stdio.h>

int main() {
    int a, b ,c;
    
    
printf("Enter value of a: ");
    scanf("%d", &a);

    
printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);
 
    if(a>b && a>c){

    printif("%d is the largest value",a);
    
    if(b>c){
    printf("%d is the smallest value",c);
    }

    else{
        printf("%d is the smallest value",b)
    }

                }

 if(b>a && b>c){

    printif("%d is the largest value",b);
    
    if(a>c){
    printf("%d is the smallest value",c);
    }

    else{
        printf("%d is the smallest value",a)
    }

                }        
 
if(c>a && c>b){

    printif("%d is the largest value",a);
    
    if(a>b){
    printf("%d is the smallest value",a);
    }

    else{
        printf("%d is the smallest value",b)
    }

                }


  
    return 0;
}



