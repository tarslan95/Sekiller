#include <stdio.h>
#include <conio.h>


void main()
{
	int kenar;
	printf("ikiz kenarin yan kenarinin * adedini giriniz: ");
	scanf("%d",&kenar);

	for(int i=1;i<=kenar;i++)
	{
		for(int j=kenar;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}


getch();
}













