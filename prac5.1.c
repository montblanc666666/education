#include <stdio.h>

int main(void)
{
	double a = -3.0;
	double b = 3.0;
	double h = 1.0;
	double x;
	double y;
	int i = 1;

	printf("%-6s %-12s %-12s\n", "N", "X", "Y");

	for (x = a; x <= b; x += h)
	{
		y=x * x - 4.0;
		printf("%-6d %-12.4f %-12.4f\n", i, x, y);
		i++;
	}
	return 0;
}





















