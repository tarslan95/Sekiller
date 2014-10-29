#include <stdio.h>
#include <conio.h>


void main()
{

	int d,y;
	printf("Dikey * adedini giriniz: ");
	scanf("%d",&d);
	printf("Yatay * adedini giriniz: ");
	scanf("%d",&y);

	for(int i=0;i<d;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("*");
		}
		printf("\n");
	}



getch();
}