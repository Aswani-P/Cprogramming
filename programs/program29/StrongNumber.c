#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=0;
    int temp=n;
  
  
    
    while(n)
    {
          int fact=1;
          int i=1;
          
          int remainder=n%10;
          while(i<=remainder){
            fact=fact*i;
            i++;
          }
          sum=sum+fact;
          n=n/10;
    }
          if(sum==temp){
            printf("the number is strong");
          }else{
            printf("not a strong number");
          }
        return 0;

}
