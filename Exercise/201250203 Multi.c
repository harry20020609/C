#include<stdio.h>
int inf=1000000000+7;
long long a[500][500],b[500][500];
int main(){
	int n,p,m,i,j,k;
	scanf("%d %d %d",&n,&p,&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=p;j++)
			scanf("%lld",&a[i][j]);
	for(i=1;i<=p;i++)
		for(j=1;j<=m;j++)
			scanf("%lld",&b[i][j]);
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++){
			long long sum=0;
			for(k=1;k<=p;k++){
				sum+=a[i][k]*b[k][j];
				sum%=inf;
			}
			if(j<m)
			   printf("%lld ",(sum+inf)%inf);
			else
			   printf("%lld\n",(sum+inf)%inf);
		}
	return 0;
}