#include<stdio.h>

#include<string.h>
int main(){
    char string[20];
      int i,j;
    printf("enter the string\n");
    scanf("%s",string);
    char temp[20];
    int l=strlen(string);
    printf("lenghth is %d\n",l);
  
    //j=l-1;
     //reversing the string by swapping
    //for(i=0;i<l;++i){
       // temp[i]=string[j];
       // j--;
    //}
    for(i=l;i>=0;i--){
      printf("%c\t",string[i]);
    }
   // printf("\nstring after reverse is: %s",temp);
    return 0;
}