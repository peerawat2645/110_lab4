#include<stdio.h>
int main()
{
    int n,i,j,g,s,b,max,min,x,y;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&g,&s,&b);
        m[i]=(g*4)+(s*2)+b;
    }
    for(i=0;i<(n-2);i++)
    {
        j=m[i]+m[i+1]+m[i+2];
        if(i==0)
        {
            max=j;
            min=j;
        }
        else
        {
            if(max<j)
            {
                max=j;
                x=i;
            }
            if(min>j)
            {
                min=j;
                y=i;
            }
        }
    }
    printf("%d %d",x+1,y+1);
    return 0;
}
