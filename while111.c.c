#include<stdio.h>
#include<conio.h>
main()
{
	int a,i;
	
	printf("Enter No:");
	scanf("%d",&a);
	
	i=1;
	while(i<=a)
	{
		printf("%d",1);
		i++;
	}
	printf("\n");
	i=1;
	while(i<=a)
	{
		printf("*");
		i++;
	}
	printf("\n");
}