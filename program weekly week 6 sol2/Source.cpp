#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d",&x);
	for (int i = 1; i <= x; i++)
	{
		for (int j = 1; j <= 2 * x - i; j++)
		{
			if (j >= i)printf("*");
			else printf(" ");
		}

		printf("\n");
	}
	for (int i = 1; i < x; i++)
	{
		for (int j = 1; j <= x+i; j++)
		{
			if (j>=x-i) printf("*");
			else printf(" ");
		
		}

		printf("\n");
	}

	
}