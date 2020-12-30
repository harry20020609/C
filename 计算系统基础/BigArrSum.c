#include<stdio.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int nums[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

    int max = nums[0];
    int sum = nums[0];
    for(int i = 1; i < n; i++){
        sum = (sum + nums[i]) > nums[i] ? (sum + nums[i]) : nums[i];
        max = sum > max ? sum : max;
    }

    printf("%d",max);
}