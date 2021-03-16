#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int unitprice=19;
    int sum;
    sum=10*a+b;
    int n;
    n=sum/unitprice;
    printf("%d",n);
}