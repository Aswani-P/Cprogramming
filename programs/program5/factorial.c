// program to find the factorial

#include<stdio.h>
int main(){
    int n,i;
    int fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
       
    }
     printf("factorial the number is%d:",fact);
     return 0;
     }