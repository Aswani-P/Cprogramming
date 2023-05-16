#include<stdio.h>
int main(){
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if((ch >= 'a' && ch <='z')||(ch>='A' && ch <='Z')){
        printf("the entered character is alphabet");
    }else{
        printf("not an alphabet");
    }
 //   return 0;
}