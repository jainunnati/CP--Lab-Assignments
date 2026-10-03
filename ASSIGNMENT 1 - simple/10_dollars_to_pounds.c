#include <stdio.h>

int main() {
    float dollars, rupees, pounds;
    
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    
    rupees = dollars * 48;
    pounds = rupees / 70;
    
    printf("Pounds = %f\n", pounds);
    
    return 0;
}