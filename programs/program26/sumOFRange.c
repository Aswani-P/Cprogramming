#include<stdio.h>
int main(){
    int start,end,i,sum=0;
    printf("enter the first range");
    scanf("%d",&start);
    printf("enter the end range");
    scanf("%d",&end);
    for(i=start;i<=end;i++){
        sum=sum+i;
    }
    printf("the sum of numbers in a range is %d",sum);
}