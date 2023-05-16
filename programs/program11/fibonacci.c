#include<stdio.h>
int main(){
    int f1=0;
    int f2=1;
    int sum=0;
    int n;
    printf("UP TO WHICH NUMBER\n");
    scanf("%d",&n);
    
    while(sum<=n){
        printf("%d",sum);
        f1=f2;
        f2=sum;
        sum=f1+f2;
    }
    return 0;
    }