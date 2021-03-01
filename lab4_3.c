#include <stdio.h>
#include <string.h>
int main()
{
    int i,j=1,k;
    char letter[201],tmp[201];
    scanf("%s",&letter);
    tmp[0]=letter[0];
    for(i=0;i<strlen(letter);i++)
    {
        if(letter[i]!=letter[i+1])
        {
            tmp[j]=letter[i+1];
            j++;
        }
    }
    printf("%s",tmp);
    return 0;
}
