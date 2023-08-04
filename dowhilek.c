#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,k;

    printf("Enter No:");
    scanf("%d",&a);

    i=1;
    do
    {
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
