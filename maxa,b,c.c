#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;

    printf("Enter The value of A:");
    scanf("%d",&a);

    printf("Enter The value of B:");
    scanf("%d",&b);

    printf("Enter The value of C:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("A is Max");
    }
    else if(b>c)
    {
        printf("B is Max");
    }
    else
    {
        printf("C is Max");
    }
    getch();
}