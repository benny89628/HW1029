#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int acc, beg, cha, cre, jud,lim;
	while (1)
	{
		printf("Enter account number:");
		scanf_s("%d",&acc);
		if (acc == -1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf_s("%d", &beg);
		printf("Enter total charges:");
		scanf_s("%d", &cha);
		printf("Enter total credits:");
		scanf_s("%d", &cre);
		printf("Enter credit limit:");
		scanf_s("%d", &lim);
		jud = beg + cre;
		if (jud > cre)
		{
			printf("Accunt:%d\n",acc);
			printf("Credir limit:%d\n",lim);
			printf("Balance:%d\n",jud);
			printf("Credir Limit Exceeded\n");
			printf("\n");
		}
	}
	system("pause");
}