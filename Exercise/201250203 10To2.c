#include <stdio.h>
#define Maxsize 100
int main()
{
	int n=0,count=0,j=0;
	int a[Maxsize],b[Maxsize];
	printf("请输入一个十进制整数:\n");
	scanf("%d",&n);
	if(n>=0){
		while(n!=0){
			a[count]=n%2;
			n=n/2;
			count++;
		}
		for(int i=count-1;i>=0;i--)//将数组逆序输出 
		printf("%d",a[i]);
	}
	else{
		n=-n;
		while(n!=0){
			a[count]=n%2;
			n=n/2;
			count++;
		}
		for(int i=count-1;i>=0;i--){//将逆序输出的结果保存在另一个数组中 
			b[j]=a[i];
			j++;
		}
		for(int i=0;i<count;i++){   //取反码 
			if(b[i]==0)
				b[i]=1;
			else
				b[i]=0;
		}
		for(int i=count-1;i>=0;i--){  //将反码加1 
			if(b[i]==0){
				b[i]=1;
				break;
			}		
			else{
				b[i]=0;
			}
		}
		for(int i=0;i<count;i++)
		printf("%d",b[i]);
	}
	printf("\n");
}
