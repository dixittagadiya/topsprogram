#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j,k;
    printf("Enter No:");
    scanf("%d",&a);

    for(i=1; i<=a; i++)
    {
    	for(j=a; j>=i; j--)
    	{
    		printf(" ");
		}
        for(k=1; k<=i;k++)
        {
            printf("%d ",i);
        }   
		printf("\n");
	}
   
}
