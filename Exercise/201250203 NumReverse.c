#include<stdio.h>
int main(){
    int x;
    int n=0;
    scanf("%d",&x);
    while (x)
	{
		n = n * 10 + x % 10;
		x /= 10;
	}
    printf("%d",n);
}