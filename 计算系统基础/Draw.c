#include<stdio.h>
int main()
{
    int h,d,x,i,j;
    char a;
    while(scanf("%d",&h)&&(h!=0))
    {
        scanf(" %d %c %d",&d,&a,&x);
        if(x==1)
        {
            for(i=1;i<=h;i++)
            {
                for(j=1;j<=d;j++)
                {
                    printf("%c",a);
                }
                    printf("\n");
            }
        }
        if(x==0)
        {
            for(i=1;i<=h;i++){
                if(i==1||i==h){
                    for(j=1;j<=d;j++){
                        printf("%c",a);
                    }
                    printf("\n");
                }
                else{
                    for(j=1;j<=d;j++){
                    if(j==1||j==d){
                        printf("%c",a);
                    }
                    else{
                        printf(" ");
                    }
                }
                    printf("\n");
                }
            }
        }
    }
}
