#include<stdio.h>
int main(){
    char a[100],b[100],c[100];
    char nextchar;
    int i=0,j=0,k=0,m=0,n=0;

    do{
        scanf("%c",&nextchar);
        if(nextchar != ' '){
            a[i] = nextchar;
            i++;
        }
    }while(nextchar != '\n');

    do{
        scanf("%c",&nextchar);
        if(nextchar != ' '){
            b[j] = nextchar;
            j++;
        }
    }while(nextchar != '\n');

    for(n=0;n<=j;n++){
        for(m=0;m<=i;m++){
            if(a[m]==b[n]){
                c[k] = a[m];
                k++;
            }
        }
    }

    k=k-1;

    for(i=0;i<=k-1;i++){
        for(j=i+1;j<=k;j++){
            if(c[i]==c[j]){
                for(n=j+1;n<k;n++){
                    c[n-1]=c[n];
                }
                k--;
            }
        }
    }

    for(i=0;i<=k;i++){
        printf("%c ",c[i]);
    }
}