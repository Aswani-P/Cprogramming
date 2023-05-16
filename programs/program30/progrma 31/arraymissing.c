#include<stdio.h>
int main(){
    int arr[]={2,4,8,10,12,14};
    int i;
    while(i<=6){

            if(i!=arr[i]){
                printf("%d the missing element is",i);
            }i=arr[i]+2;
       
    }

    return 0;
}