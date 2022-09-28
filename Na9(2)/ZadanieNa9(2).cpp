#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c = 0;
	int d = 0;
	printf("Введите три числа\n");
	scanf_s("%f%f%f", &a,&b,&c);
	if (a - round(a) == 0) d++;
	if (b - round(b) == 0) d++;
	if (c - round(c) == 0) d++;

	printf("Целых чисел -- %d", d);
	return 0;



	
}