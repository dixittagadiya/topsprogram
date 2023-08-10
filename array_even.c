#include<stdio.h>
#include<conio.h>
main()
{
    int i,a[10],j;

    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("_____________________");
    printf("\n");

    for(i=0; i<10; i++)
    {
        if(i%2==1)
        {
            printf("%d is even \n",a[i]);
        }
    }
    getch();
}