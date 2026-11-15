/*Convert a String to lower case*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a Sting(Max len is 9 and mixed case)");
    gets(str);
    printf("Lower Case:%s", strlwr(str));
    printf("\n");
    printf("Method 2:");
    int i=0;
    while(str[i]!=0)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("Lower Case:%s",str);
}