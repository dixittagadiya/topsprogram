#include<stdio.h>
#include<conio.h>
main()
{
    int a,i,j,k;

    printf("Enter NO:");
    scanf("%d",&a);

    for(i=a; i>=1; i--)
    {
        for(j=i; j>=1; j--)
        {
            printf(" ");
        }
        for(k=a; k>=i; k--)
        {
        	printf(" *");
		}
        printf("\n");
    }
    for(i=2; i<=a; i++)
    {
    	for(j=1; j<=i; j++)
    	{
    		printf(" ");
		}
		for(k=i; k<=a; k++)
		{
			printf(" *");
		}
		printf("\n");
    }
    

}
