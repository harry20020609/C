#include<stdio.h>
int main()
{
    char nextchar;
    char c[100];
    int i = 0,j = 0;

    do{
        scanf("%c",&nextchar);
        if(nextchar!='\0'){
            c[i] = nextchar;
            i++;
        }
    }while(nextchar != '\n');

    for(j=0;j<=i;j++){
        printf("%c",c[i-j]);
    }

}