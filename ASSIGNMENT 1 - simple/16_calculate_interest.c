#include <stdio.h>

int main() {
    float p, r, n, interest;
    
    printf("Enter Principal (P), Rate (R), and Time (N): ");


    scanf("%f%f%f", &p, &r, &n);
    
    interest = (p * r * n) / 100;
    printf("Interest = %f\n", interest);
    
    return 0;
}