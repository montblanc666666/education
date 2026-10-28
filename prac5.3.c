#include <stdio.h>

int main(void)
{
	int n;
	int i;
	double sum;
	double term;

	scanf("%d", &n);

	while (n > 0)
	{
		sum = 0.0;

		for (i = 1; i <= n; i++)
		{
			term = (double)i * i * i;
			sum += term;
		}
		
		printf("SUM: %.6f\n", sum);
		break;
	}
	return 0;
}

