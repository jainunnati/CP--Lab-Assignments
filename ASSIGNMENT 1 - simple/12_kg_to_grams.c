#include <stdio.h>

int main() {
    float kg, grams;
    
    printf("Enter weight in KG: ");
    
    scanf("%f", &kg);
    
    grams = kg * 1000;
    
    printf("Weight in Grams = %f\n", grams);
    
    return 0;
}