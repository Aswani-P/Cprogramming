/*program to print inverted left half pyramid*/

#include<stdio.h>
int main(){
    int row=6;
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=0;j<2*i;j++){
            printf(" ");

        }
        for(k=0;k<=row-i;k++){
            printf(" *");
        }
        printf("\n");
    }
}