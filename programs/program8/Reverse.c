//program to reverse a number

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int rev,num=0;
    while(n>0){
        rev=n%10;
        num=num*10+rev;
        n=n/10;
    }
    printf("the reverse of the number=%d",num);
    //return 0;
}