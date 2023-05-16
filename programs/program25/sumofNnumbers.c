#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    
        for(i=1;i<=n;i++){
            sum=sum+i;
        }
    
    printf(" the sum of n numbers is%d",sum);
}