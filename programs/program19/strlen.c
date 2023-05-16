#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i;
    int count=0;
    printf("enter the string\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';++i){
        
        count=count+i;
    }
    printf("the length is\t%d ",count);
    return 0;
        
     
}