#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b;
	printf("Enter sales in dollars:");
	scanf_s("%f", &a);
	b = a * 9 / 100;
	printf("salary:%f", b);
	system("pause");
}