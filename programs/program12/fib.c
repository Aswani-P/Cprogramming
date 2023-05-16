#include<stdio.h>

   // int fib(int n);
    int fib(int n){
        if(n<=1){
            return n;
        }else{
            return fib(n-1)+fib(n-2);
        }
    

}
int main(){
    int n;
    int sum=0;
    printf("enter the num");
    scanf("%d",&n);
    while(fib(sum)<=n){
        printf("%d",fib(sum));
        sum=sum+1;
    }
  
}