#include<stdio.h>
int main(){
    int a[100];
    int nextint=1,i=0;

    do{
        scanf("%d",&nextint);
        a[i]=nextint;
        i++;
    }while(nextint!=0);
    i=i-1;

    for(int j=1;j<=i;j++){
        printf("%d ",a[i-j]);
    }
}