//Swap variable without using third variable

#include<stdio.h>
int main(){
    int a,b;
    printf("enter the vakue of a ");
    scanf("%d",&a);
    printf("enter the value of b ");
    scanf("%d",&b);
            // a=a+b;
            //b=a-b;
            // a=a-b;

            a=a*b;
            b=a/b;
            a=a/b;
    printf("the value of a is %d and the value of b is %d",a,b);
}