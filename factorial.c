#include<stdio.h>
#include<conio.h>
main()
{
    int factorial=1,a,i;

    printf("Enter No:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)

    factorial=factorial*i;
    {
        printf("factorial of %d is:%d\n",factorial,a);
    }
    getch();
}
