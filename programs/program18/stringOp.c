#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int l,i;
    char tem[100];
    printf("enter the string\n");
    
    scanf("%s",&str);
    l=strlen(str);
    strcpy(tem,str);
    printf("%s %s",tem,str);
    //printf("\nString 1 : %s\nString 2 : %s\n",str, tem);
    printf("\nthe length of a string is %d\n",l);
      printf("reverse of the string is");
    for(i=l;i>=0;i--){
        
        printf("  %c",str[i]);
    }
  
    return 0;
}