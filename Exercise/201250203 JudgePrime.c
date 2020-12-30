#include<stdio.h>
int main(){
    int n,x,count=0;
    int all[100];
    scanf("%d\n",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        for(int j=1;j<=x;j++){
            if(x%j==0){
                count++;
            }
        }
        if(count==2){
            all[i]=1;
        }
        else
            all[i]=0;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",all[i]);
    }
}