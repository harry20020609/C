#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=3000000,sum=0;
    int j,k;
    for(j=0;j<n-m;j++){
        for(k=j;k<j+m;k++){
            sum=sum+a[k];
        }
        if(sum<min)min=sum;
        sum=0;
    }
    if(m==0||n==0)printf("0");
    else printf("%d",min);
}