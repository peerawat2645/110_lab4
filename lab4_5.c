#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,tmp,k;
    int r[4];
    scanf("%d",&n);
    char s[51];
    for(i=0; i<n; i++){
        scanf("%s",s);
        for(k=1; k<4; k++)
            r[k]=0;
        r[0]=1;
        for(j=0; j<strlen(s); j++)
        {
            if(s[j]=='A')
            {
                tmp=r[1];
                r[1]=r[2];
                r[2]=tmp;
            }
            else if(s[j]=='B')
            {
                tmp=r[0];
                r[0]=r[3];
                r[3]=tmp;
            }
            else if(s[j]=='C')
            {
                tmp=r[0];
                r[0]=r[2];
                r[2]=tmp;
                tmp=r[1];
                r[1]=r[3];
                r[3]=tmp;
            }
            else if(s[j]=='D')
            {
                tmp=r[0];
                r[0]=r[1];
                r[1]=tmp;
                tmp=r[2];
                r[2]=r[3];
                r[3]=tmp;
            }
            else if(s[j]=='E')
            {
                tmp=r[0];
                r[0]=r[3];
                r[3]=tmp;
                tmp=r[1];
                r[1]=r[2];
                r[2]=tmp;
            }
        }
         for(k=0; k<4; k++)
         {
            if(r[k]==1)
            {
                printf("%d\n",k+1);
            }

         }
    }

    return 0;
}
