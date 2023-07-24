#include<stdio.h>
#include<conio.h>
void main()
{

    int a,i,j,k;

    printf("Enter No:");
    scanf("%d",&a);

    for(i=a; i>=1; i--)
    {
        for(j=i; j<=a; j++)
        {
            printf(" ");
        }
        for(k=i; k>=1; k--)
        {
		
          printf("* ");
        }
        printf("\n");
        getch();
    }
}
