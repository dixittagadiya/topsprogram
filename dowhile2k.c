#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,j,k;

    printf("Enter No:");
    scanf("%d",&a);

    i=1;
    do
    {
        j=1;
        do
        {
            printf(" ");
            j++;
        } while (j<=i);
        
        k=i;
        do
        {
            printf("*");
            k++;
        } while (k<=a);
        printf("\n");
        i++;
    } while (i<=a);
    
    i=a-1;
    do
    {
        j=i;
        do
        {
            printf(" ");
            j--;
        } while (j>=1);
        
        k=a;
        do
        {
            printf("*");
            k--;
        } while (k>=i);
        printf("\n");
        i--;
    } while (i>=1);
}
