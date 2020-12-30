#include<stdio.h>
int main(){
    char str[100];
    char target[100];
    int sign[100],flag=0,k=0;
    int len1,len2;
    scanf("%s",str);
    scanf("%s",target);

    for(int i=0;i<100;i++){
        sign[i]=-1;
    }

    for(len1=0;;len1++)
        if(str[len1]=='\0')break;
    for(len2=0;;len2++)
        if(target[len2]=='\0')break;

    for(int i=0;i<=(len1-len2);i++){
        for(int j=i;j<(i+len2);j++){
            if(str[j]==target[j-i]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            sign[k]=i;
            k++;
        }
    }
    //找到分割点 并存入sign数组

    int len;
    for(len=0;;len++){
        if(sign[len]==-1)break;
    }

    for(int i=0;i<len;i++){
        if(i==0){
            if(sign[i]==0){
                printf("EmptyString\n");
                if(len1==len2){
                    printf("EmptyString\n");
                }
                if(len1>len2 && len==1){
                    for(int j=len2;j<len1;j++){
                        printf("%c",*(str+j));
                    }
                    printf("\n");
                }
            }
            else{
                for(int j=0;j<sign[0];j++){
                    printf("%c",str[j]);
                }
                printf("\n");
            }
        }
        else{
            if(sign[i]==sign[i-1]+len2){
                printf("EmptyString\n");
            }
            else{
                for(int j=sign[i-1]+len2;j<sign[i];j++){
                    printf("%c",*(str+j));
                }
                printf("\n");
            }
            if(i==len-1){
                if(sign[i]+len2==len1){
                    printf("EmptyString\n");
                }
                else{
                    for(int j=sign[i]+len2;j<len1;j++){
                        printf("%c",*(str+j));
                    }
                    printf("\n");
                }
            }
        }
    }

    if(len==0){
        printf("%s",str);
    }
}