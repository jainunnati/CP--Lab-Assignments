#include <stdio.h>

int main() {
    float a, b, add, sub, mul, div;
    printf("Enter value of a: ");
    scanf("%f", &a);

     printf("Enter value of b: ");
    scanf("%f", &b);
    
    // Direct calculations
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    
    // Printing all results simply
    printf("Addition = %f\n", add);
    printf("Subtraction = %f\n", sub);
    printf("Multiplication = %f\n", mul);
    printf("Division = %f\n", div);
    
    return 0;
}