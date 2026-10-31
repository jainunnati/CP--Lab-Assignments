#include <stdio.h>

int main() {
    int a, b;
    
    
    printf("Enter value of a: ");
    scanf("%d", &a);

     printf("Enter value of b:");
    scanf("%d", &b);

    
    if (a > b) {
        printf("Largest = %d\n", a);
        printf("Smallest = %d\n", b);
    } else {
        printf("Largest = %d\n", b);
        printf("Smallest = %d\n", a);
    }
    
    return 0;
}