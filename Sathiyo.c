#include<stdio.h>
void main()
{
    int i,j,a;

    printf("Enter the number:\n");
    scanf("%d",&a);

    for(i=1; i<=a*2-1; i++)
    {
        for(j=1; j<=a*2-1; j++)
        {
            if(i==a||j==a||i==1&&j>a||i<a&&j==1||i>a&&j==a*2-1||i==a*2-1&&j<a)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}