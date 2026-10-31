#include <stdio.h>

int main() {
    int n , a , b , next , i;
    
    printf("Enter how many terms you want: ");
    scanf("%d", &n);
    
    a = 1;
    b = 1;
    
    printf("Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b; 
        a = b;       
        b = next;    
    }
    printf("\n");
    
    return 0;
}