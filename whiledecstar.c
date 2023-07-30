#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,j;
	
	printf("Enter No:");
	scanf("%d",&a);
	
	i=a;
	while(i>=1)
	{
		j=i;
		while(j>=1)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i--;
	}
}