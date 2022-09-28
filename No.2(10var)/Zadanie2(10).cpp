#include <stdio.h>
#include <math.h>

int main()
{
	const float Pi = 3.1416;
	float S1,S2,r,a = 0;
	printf("Введите S1 S2\n");
	scanf_s("%f%f",&S1,&S2);
	r = sqrt(S1) / Pi;
	a = sqrt(S2);

	if (2*r>a*sqrt(2)) printf("Квадрат поместится в круге, но не наоборот");
	if (2 * r < a) printf("Круг поместится в квадрате, но не наоборот");

	
	return 0;

}