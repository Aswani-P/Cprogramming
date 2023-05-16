//program to checck if the given number is amstrong or not

#include<stdio.h>
int main(){
    int n;
    int temp,rev;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        rev=n%10;
        sum=sum+(rev*rev*rev);
        n=n/10;
     }
     if(temp==sum){
        printf("The number  %d is AMSTRONG",temp);
     }else{
        printf("the number %d is not AMSTRONG",temp);
     }
     return 0;
}