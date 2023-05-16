//What is the correct code to have the following pattern in c using nested for loop
/*1
  1 2
  1 2 3
  1 2 3 4*/

#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of rows\n");
    printf("-------------------------------------------------\n");
    scanf("%d",&n);
    for(i=1;i<n+1;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);

        }
        printf("\n");
    }
    return 0;
}