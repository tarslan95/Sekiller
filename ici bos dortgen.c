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
			if (i == 0 || j == 0 || i==d-1||j==y-1)
			printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}



getch();
}