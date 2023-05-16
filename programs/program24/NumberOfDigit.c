#include<stdio.h>
int main(){
    int n;
    int count=0;
    printf("enter the number of digit\n");
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        count=count+1;
        }
        printf("the number of digits %d",count);
}