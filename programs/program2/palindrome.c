// program to find the number is palindrome or not

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int temp,rev;
    int sum=0;
    temp=n;
    while(n>0){
        rev=n%10;
        sum=(sum*10)+rev;
        n=n/10;
    }
        if(temp==sum){
            printf("the entered number is palindrome");
        }else{
            printf("Is not palindrome");
        }
        return 0;
    }
    

