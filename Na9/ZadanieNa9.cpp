#include <stdio.h>

int main()
{
	int a, b, c, sum1, sum2 = 0;
	printf("Введите номер билета\n");
	scanf_s("%d", &a);

	b = a % 1000;
	while (b != 0)
	{
		c = b % 10;
		sum1 = sum1 + c;
		b = b / 10;

	}

	b = a / 1000;
	while (b != 0)
	{
		c = b % 10;
		sum2 = sum2 + c;
		b = b / 10;
	}

	if (sum1 == sum2)
	{
		printf("Билет -- счастливый.");
	}
	else
	{
		printf("Билет -- несчастливый.");
	}

	return 0;
}
