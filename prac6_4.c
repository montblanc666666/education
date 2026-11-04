#include <stdio.h>

int main(void)
{
	double sum, fsum, ds, dssum;

	scanf("%lf", &sum);

	if (sum < 0)
	{
		printf("Error\n");
	}
	else {
		if (sum > 1000) 
		{
			ds = 15;
		}
		else if (sum > 500) 
		{
			ds = 10;
		}
		else if (sum > 100)
		{
			ds = 5;
		}
		else 
		{
			ds = 0;
		}

		dssum = sum * ds / 100;
		fsum = sum - dssum;

		printf("\nSum: %.2f\n", sum);
		printf("\nRate:\n");
		if (ds == 15) 
		{
			printf("Sum > 1000 => Discount = 15%%\n");
		}

		else if (ds == 10)
		{
			printf("Sum > 500 => Discount = 10%%\n");
		}
		else if (ds == 5)
		{
			printf("Sum > 100 => Discount = 5%%\n");
		}
		else
		{
			printf("No discount\n");
		}

		printf("Discount: %.2f\n", dssum);
		printf("Final sum: %.2f\n", fsum);
	}
	return 0;
}

















