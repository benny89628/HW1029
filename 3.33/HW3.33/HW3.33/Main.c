#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char sign = '+';
	char sign2 = ' ';
	int i, j,a,b;
	scanf_s("%d%d", &a,& b);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if ((i == 0) || (i == a-1) || (j == 0) || (j == b-1))
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	system("PAUSE");
	return 0;
}