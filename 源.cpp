#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	float a = 0, b = 0, c = 0, p = 0;
	float area = 0;
	printf("Please input three sides of triangle:");
	scanf_s("%f %f %f", &a, &b, &c);
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		p = (a + b + c) / 2;
		area = sqrt(p * (p - a) * (p - b) * (p - c));
	}
	else
		printf("Triangle does not exist£¡\n");
	printf("The area of triangle is:%f\n", area);
	system("pause");

	return 0;
}