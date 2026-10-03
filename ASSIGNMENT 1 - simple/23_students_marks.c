#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total, avg;
    
    printf("Enter marks of three subjects: ");
    scanf("%f%f%f", &sub1, &sub2, &sub3);
    
    total = sub1 + sub2 + sub3;
    avg = total / 3;
    
    printf("Total Marks = %f\n", total);
    printf("Average Marks = %f\n", avg);
    
    return 0;
}