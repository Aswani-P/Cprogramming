#include<stdio.h>
int main(){
    int a,b;
    int greatest;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    if(a>b){
        greatest=a;
    }else{
        greatest=b;
    }
    printf("the greatest of two number is %d",greatest);
    return 0;
}