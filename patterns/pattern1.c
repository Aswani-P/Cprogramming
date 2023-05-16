// progrm to print the pattern
/*
* * * *
* * * *
* * * *
* * * *
* * * *
*/

#include <stdio.h>

void main() {
	int i,j;
    int row,column;
    printf("enter the row");
    scanf("%d",&row);
    printf("enter the column");
    scanf("%d",&column);
	
	for (i=0; i<row; i++) {
		for (j=0; j<column; j++) {
			printf(" * ");
		}
		printf("\n");
	}
	
}

