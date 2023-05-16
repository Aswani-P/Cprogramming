#include<stdio.h>
int main(){
    int n;
    printf("enter the number \n");
    scanf("%d",&n);
    if(n%2==0){
        printf("entered number is EVEN");
    }else{
        printf("the entered numner is ODD");
    }
    return 0;
}