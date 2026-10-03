#include <stdio.h>

int main() {
    float mins, hours;
    
    printf("Enter minutes: ");
    scanf("%f", &mins);
    
    hours = mins / 60;
    
    printf("Hours = %f\n", hours);
    
    return 0;
}