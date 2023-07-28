#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,j,k;

    printf("Enter NO:");
    scanf("%d",&a);

    for(i=a; i>=1; i--)
    {
        for(j=a; j>=i; j--)
        {
            printf(" ");
        }
        for(k=i; k>=1; k--)
        {
		    printf("%d",i*i);
        }
        printf("\n");

    }

}
