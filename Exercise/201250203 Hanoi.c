#include<stdio.h>
int main(){
    int n,x;
    int sum[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum[i]=1;
        for(int j=0;j<x;j++){
            sum[i]=sum[i]*2;
        }
        sum[i]=sum[i]-1;
    }

    for(int i=0;i<n;i++){
        printf("%d\n",sum[i]);
    }
}