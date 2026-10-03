#include <stdio.h>

int main() {
    float hours, mins;
    
    printf("Enter hours: ");
    scanf("%f", &hours);
    
    mins = hours * 60;
    
    printf("Minutes = %f\n", mins);
    
    return 0;
}