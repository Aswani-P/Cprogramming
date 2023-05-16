#include <stdio.h>
int main()
{
int start, end, i, flag;
printf("\nEnter start value : ");
scanf("%d",&start);
printf("\nEnter end value : ");
scanf("%d",&end);
printf("\nPrime Numbers between %d and %d : ", start, end);
while (start < end)
{
    flag = 0;
    for(i = 2; i <= start/2; ++i)
    {
        if(start % i == 0)
        {
            flag = 1;
            break;
            }
            }
            if (flag == 0)
            printf("%d ", start);
            ++start;
             }
            printf("\n");
            return 0;
}