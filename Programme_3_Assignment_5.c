/*Convert a String to upper case*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a Sting(Max len is 9 and mixed case)");
    gets(str);
    printf("Upper Case:%s", strupr(str));
    printf("\n");
    printf("Method 2:");
    int i=0;
    while(str[i]!=0)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("Lower Case:%s",str);
}