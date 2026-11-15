/*Find out length of a string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a Sting(Max len is 9)");
    gets(str);
    printf("Length of string is:%d",strlen(str));
    printf("\n");
    printf("Method 2:\n");
    int i=0,count=0;
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("Length of string is:%d",count);
    return 0;
}