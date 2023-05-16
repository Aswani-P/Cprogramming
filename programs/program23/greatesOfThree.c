#include<stdio.h>
int main(){
    int a, b,c,greatest;
    printf("enter the value a");
    scanf("%d",&a);
    printf("enter the values b");
    scanf("%d",&b);
    printf("enter the values c");
    scanf("%d",&c);
    if(a>b && a>c){
        greatest=a;
    }else if(b>a && b>c){
        greatest=b;
    }else{
        greatest=c;
    }
    printf(" the greatest is %d",greatest);
    return 0;
}