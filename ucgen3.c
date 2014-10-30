#include <stdio.h>
#include <conio.h>


void main()
{
	int a;
	printf("Bir sayi giriniz:");
	scanf("%d",&a);

	for(int i=0;i<a;i++)
	{
		for(int j=a;j>i;j--)
		{
			
			printf("*");
			
		}
		printf("\n");

		for(int b=0;b<i+1;b++)
		{	
			printf(" ");
		}
		
		
		
		}
	


getch();
}