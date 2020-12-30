#include<stdio.h>
int main(){
    int T,N,flag;
    char str[100][40];
    char *ptr[100];
    scanf("%d",&T);

    for(int seq=0;seq<T;seq++){
        scanf("%d",&N);
        for(int i=0;i<N;i++){
            scanf("%s",&str[i]);
            ptr[i]=&str[i][0];
        }

        for(int i=0;i<N-1;i++){
            for(int j=0;j<N-i-1;j++){

                int len1,len2,len;
                for(len1=0;;len1++)
                    if(str[j][len1]=='\0')break;
                for(len2=0;;len2++)
                    if(str[j+1][len2]=='\0')break;
                len=(len1<len2)?len1:len2;

                for(int k=0;k<len;k++){
                    if(str[j][k]>str[j+1][k])
                        flag=1;
                    if(str[j][k]<str[j+1][k])
                        flag=0;
                        break;
                }

                if(len1>len2&&flag==0){
                    flag=1;
                }

                if(flag){
                    char *tmp = ptr[j];
                    ptr[j] = ptr[j+1];
                    ptr[j+1] = tmp;
                }
            }
        }
        printf("%s %s",ptr[0],ptr[N-1]);
    }
}