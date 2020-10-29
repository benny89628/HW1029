#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b,c;
	b = 10;
	scanf_s("%f", &a);
	for (int i = 0; i < 6; i++)
	{
		c = (a * b)/100;
		printf("%f\n", c);
		b = b + 0.5;
	}
}