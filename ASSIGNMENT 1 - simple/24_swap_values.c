#include <stdio.h>

int main() {
    int x, y;
    
   printf("Enter value of x: ");
    scanf("%d", &x);

     printf("Enter value of y:");
    scanf("%d", &y);
    
    
    x = x + y; //  Combine both values into x
    y = x - y; // Subtract new y from x to get old x (stored in y)
    x = x - y; //subtract new y from combined x to get old y (stored in x)
    
    printf("After swapping: x = %d, y = %d\n", x, y);
    
    return 0;
}