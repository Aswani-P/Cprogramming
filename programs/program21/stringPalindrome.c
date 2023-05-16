#include <stdio.h>
#include <string.h>
int solve(char *string){
   int length;
   char *forward, *reverse;
   length = strlen(string);
   forward = string;
   reverse = forward + length - 1;
   for (forward = string; reverse >= forward;) {
      if (*reverse == *forward) {
         reverse--;
         forward++;
      } else
         break;
   } if (forward > reverse)
         printf("is palindrome");
   else
      printf("not palindrome");
}
int main(){
   char string[100];
   printf("enter the string\n");
   gets(string);

   printf("%d", solve(string));
}