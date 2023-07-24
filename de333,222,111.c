#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i,j;
    printf("Enter No:");
    scanf("%d",&a);

    for(i=a; i>=1; i--)
    {
    	for(j=a; j>=1; j--)
    	{
    		printf("%d",i);
		}
		printf("\n");
	}
   
}
