#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],i;
    gets(str);
    for(i=0;i!=strlen(str);i++)
    {
        if(str[i]==str[i+1])
        {
            continue;
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
