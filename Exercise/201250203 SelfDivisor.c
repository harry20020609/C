#include<stdio.h>
int main(){
    int a[100];
    int x,y,i,j,flag;
    scanf("%d",&x);
    y=x;
    for(i=0;x!=0;i++){
        a[i]=x%10;
        x=x/10;
    }
    for(j=0;j<=i;j++){
        if(y%a[j]==0){
            flag=1;
        }
        else
            flag=0;
            break;
    }
    if(flag){
        printf("true");
    }
    else
        printf("false");
}