#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,j;

    printf("Enter NO:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
        for(j=1; j<=a; j++)
        
            if(i==a||i==1||j==a||j==1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        printf("\n");
            
        
    }
}
