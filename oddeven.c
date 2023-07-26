#include<stdio.h>
#include<conio.h>
main()
{
    int a;

    printf("Enter NO:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("%d is Even:");
    }
    else
    {
        printf("%d is odd:");
    }
    getch();
}
