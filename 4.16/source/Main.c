#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '*';
	char sign2 = ' ';
	int i, j;
	int temp=0;
	int temp2=0;

	//===========================================
	printf("(A)\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (j<temp)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp++;
		printf("\n");
	}
	//===========================================
	printf("(B)\n");
	temp = 10;
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (j < temp)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp--;
		printf("\n");
	}
	//===========================================
	printf("(C)\n");
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (j <= temp)
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign);
			}
		}
		temp++;
		printf("\n");
	}
	//===========================================
	printf("(D)\n");
	temp = 10;
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (j <= temp)
			{
				printf("%c", sign2);
			}
			else
			{
				printf("%c", sign);
			}
		}
		temp--;
		printf("\n");
	}
}