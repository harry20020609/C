#include<stdio.h>
int main(){
    int n,i=0,temp;
    int a[200000];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]<a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(a[i]==a[j]){
                for(int k=j;k<=n-1;k++){
                    a[k]=a[k+1];
                }
                n--;
            }
        }
    }
    
    if(n<3){
        printf("%d",a[n-1]);
    }
    else
        printf("%d",a[2]);
}