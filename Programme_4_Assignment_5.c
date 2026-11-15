/*Convert a String to toggle case*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    printf("Enter a Sting(Max len is 9 and mixed case)");
    gets(str);
    int i=0;
    while(str[i]!=0)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("Toggle Case:%s",str);
}