//program to find the sum of digits

#include<stdio.h>
int main(){
    int n,rev;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
        rev=n%10;
        sum=sum+rev;
        n=n/10;
    }
    printf("the sum of the digit of the given number is %d",sum);
    return 0;
}