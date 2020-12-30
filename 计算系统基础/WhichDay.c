#include<stdio.h>
int main(){
    int year,month,day;
    int sum=0,left;
    scanf("%d\n",&day);
    scanf("%d\n",&month);
    scanf("%d",&year);
    
    for(int i=1971;i<year;i++){
        if(i%4==0){
            if(i%100==0 && i%400!=0){
                sum=sum+365;
            }
            else
                sum=sum+366;
        }
        else
            sum=sum+365;
    }
    
    if(year%4==0){
            if(year%100==0 && year%400!=0){
                switch(month){
                    case 1:break;
                    case 2:sum=sum+31;break;
                    case 3:sum=sum+59;break;
                    case 4:sum=sum+90;break;
                    case 5:sum=sum+120;break;
                    case 6:sum=sum+151;break;
                    case 7:sum=sum+181;break;
                    case 8:sum=sum+212;break;
                    case 9:sum=sum+243;break;
                    case 10:sum=sum+273;break;
                    case 11:sum=sum+304;break;
                    case 12:sum=sum+334;break;
                    default:break;
                }
            }
            else
                switch(month){
                    case 1:break;
                    case 2:sum=sum+31;break;
                    case 3:sum=sum+59+1;break;
                    case 4:sum=sum+90+1;break;
                    case 5:sum=sum+120+1;break;
                    case 6:sum=sum+151+1;break;
                    case 7:sum=sum+181+1;break;
                    case 8:sum=sum+212+1;break;
                    case 9:sum=sum+243+1;break;
                    case 10:sum=sum+273+1;break;
                    case 11:sum=sum+304+1;break;
                    case 12:sum=sum+334+1;break;
                    default:break;
                }
    }
    else
            switch(month){
                    case 1:break;
                    case 2:sum=sum+31;break;
                    case 3:sum=sum+59;break;
                    case 4:sum=sum+90;break;
                    case 5:sum=sum+120;break;
                    case 6:sum=sum+151;break;
                    case 7:sum=sum+181;break;
                    case 8:sum=sum+212;break;
                    case 9:sum=sum+243;break;
                    case 10:sum=sum+273;break;
                    case 11:sum=sum+304;break;
                    case 12:sum=sum+334;break;
                    default:break;
                }
    
    sum=sum+day-1;
    left=sum%7;

    switch(left){
        case 0:printf("Friday");break;
        case 1:printf("Saturday");break;
        case 2:printf("Sunday");break;
        case 3:printf("Monday");break;
        case 4:printf("Tuesday");break;
        case 5:printf("Wednesday");break;
        case 6:printf("Thursday");break;
        default:break;
    }
}