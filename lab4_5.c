#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,tmp,k;
    int r[4];
    scanf("%d",&n);
    int ans[n];
    char s[n][51];
    for(i=1; i<4; i++)
        r[i]=0;
    r[0]=1;
    for(i=0; i<n; i++)
        scanf("%s",s[i]);
    printf("%d",strlen(s[0]));
    for(i=0; i<n; i++)
    {
        for(j=0; j<strlen(s[i]); j++)
        {
            if(s[i][j]=='A')
            {
                tmp=r[1];
                r[1]=r[2];
                r[2]=tmp;
            }
            else if(s[i][j]=='B')
            {
                tmp=r[0];
                r[0]=r[3];
                r[3]=tmp;
            }
            else if(s[i][j]=='C')
            {
                tmp=r[0];
                r[0]=r[2];
                r[2]=tmp;
                tmp=r[1];
                r[1]=r[3];
                r[3]=tmp;
            }
            else if(s[i][j]=='D')
            {
                tmp=r[0];
                r[0]=r[1];
                r[1]=tmp;
                tmp=r[2];
                r[2]=r[3];
                r[3]=tmp;
            }
            else if(s[i][j]=='E')
            {
                tmp=r[0];
                r[0]=r[3];
                r[3]=tmp;
                tmp=r[1];
                r[1]=r[2];
                r[2]=tmp;
            }
        }
        printf("%d %d %d %d",r[0],r[1],r[2],r[3]);
    }


    return 0;
}
