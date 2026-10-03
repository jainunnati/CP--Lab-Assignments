#include <stdio.h>

int main() {
    float bytes, kb, mb, gb;
    
    printf("Enter bytes: ");
    scanf("%f", &bytes);
    
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    
    printf("KB = %f\n", kb);
    printf("MB = %f\n", mb);
    printf("GB = %f\n", gb);
    
    return 0;
}