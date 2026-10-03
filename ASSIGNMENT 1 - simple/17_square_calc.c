#include <stdio.h>

int main() {
    float l, area, perimeter;
    
    printf("Enter side length of square: ");
    scanf("%f", &l);
    
    area = l * l;
    perimeter = 4 * l;
    
    printf("Area = %f\n", area);
    printf("Perimeter = %f\n", perimeter);
    
    return 0;
}