// progrm to check the numbre is prime or not

#include<stdio.h>
int main(){
    int n;
    int i;
    int flag=0;
  
    printf("Enter the number ");
    scanf("%d",&n);
  
    if(n==0||n==1){
        flag=1;
    
    }
    
        for(i=2;i<=n/2;i++){
            if(n%i==0){
            flag = 1;
            //break;
            }
        }
            if(flag==0){
                printf("%d is a prime",n);
            }else{
                printf("not a prime");
            }
            return 0;
}
    
    
