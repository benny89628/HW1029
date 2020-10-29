#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	while (1)
	{
		float a, b, c;
		printf("Enter # of hours worked:");
		scanf_s("%f", &a);
		if (a == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker:");
		scanf_s("%f", &b);
		if (a > 40)
		{
			c = (a - 40)*1.5*b + 40 * b;
		}
		if (a < 40)
		{
			c = a * b;
		}
		printf("Salary is $%f\n", c);
	}
	system("pause");
	return 0;
}