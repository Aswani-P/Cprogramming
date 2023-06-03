/*print the program to print the inverted full pyramid */
#include<stdio.h>
int main(){
    int row=4;
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<2*i;j++){
            printf(" ");
        }
        for(k=0;k<2*(row-i)-1;k++){
            printf("* ");
        }
        printf("\n");
    }
}