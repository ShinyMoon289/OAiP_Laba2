#include <stdio.h>
#include <math.h>

int main()
{

	int a, b, c, d = 0;
	printf("Введите а, б, с\n");
	scanf_s("%i%i%i", &a,&b,&c);
	if (a > 0) d=d+1;
	if (b > 0) d =d+1;
	if (c > 0) d =d+1;

	printf("Положительных чисел %i", d);

	return 0;

}