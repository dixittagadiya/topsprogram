#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,j,n=1;

    printf("Enter No:");
    scanf("%d",&a);

    for ( i = 1; i <=a; i++)
    {
        for(j=1; j<=a; j++)
        {
            printf("%d",n++);
        }
        printf("\n");
    }
    getch();
    
}