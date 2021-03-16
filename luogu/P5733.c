#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);

    int len;
    for(len=0;;len++)
        if(*(str+len)=='\0')break;

    int gap;
    gap='A'-'a';
    
    for(int i=0;i<len;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]+gap;
        }
    }

    printf("%s",str);
}