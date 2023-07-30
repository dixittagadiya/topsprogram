#include<stdio.h>
#include<conio.h>
main()
{
	int a,i,j;
	
	printf("Enter No:");
	scanf("%d",&a);
	
	i=1;
	while(i<=a)
	{
		j=a;
		while(j>=i)
		{
			printf(" ");
			j--;
		}
		
		j=1;
		while(j<=i)
		{
			printf("* ");
			j++;
		}
		i++;
		printf("\n");
	}
}