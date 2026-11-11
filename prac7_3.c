#include <stdio.h>

double func(double a, double b)
{
	double diff = a - b;

	if (diff < 0)
	{
		diff = -diff;
	}
	return diff / (a + b);
}

int main(void)
{
	double a, b;
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		if (a + b == 0.0)
		{
			continue;
		}

		printf("Результат: %.4f\n", func(a, b));
	}
	return  0;
}


