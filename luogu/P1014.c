#include<stdio.h>
int main( )
{
    int n,s=0,k=0,fz=0,fm=0,i;
    scanf("%d",&n);
    for(i=1;s<n;i++) s=s+i;
    i=i-1;
    k=n-(s-i);
    if(i%2==0)
{
    fz=k;
    fm=i+1-k;
}
    else if(i%2==1)
{
    fm=k;
    fz=i+1-k;
}
    printf("%d/%d",fz,fm);
}