/*print right half pramid 
*
* *
* * *
*/
#include<stdio.h>
int main(){
    
    int row=5,i,j;
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            printf("%d ",j+1);
            printf("+");
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}
