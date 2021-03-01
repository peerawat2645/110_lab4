#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int i,j=0,k=0;
    char s[1000],check[11][5]= {"i","of","the","on","at","for","with","a","an","in","and"};
    char *token;
    scanf("%[^\n]s",s);
    token = strtok(s," ");
    while(token != NULL){
        /*for(i=0;i<10; i++)
            if(strcmp(token,check[i]))
                j++;*/
        if(k==0)
            printf("%c",toupper(token[0]));
        j=0,k++;
        token = strtok(NULL," ");
    }
    return 0;
}
