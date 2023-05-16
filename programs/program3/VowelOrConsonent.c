// program to check the given character is vowel or consonant.


#include <stdio.h>

int main() {
   char ch;
   printf("enter the character\n ");
   scanf("%c",&ch);
   if((ch=='i'||(ch=='o')||(ch=='e')||(ch=='u')||(ch=='a')||(ch=='A')||(ch=='I')||(ch=='O')||(ch=='U')||(ch=='E'))){
       printf("Entered character is vowel.");
   }else{
       printf("The entered character is consonant.");
   }

    return 0;
}