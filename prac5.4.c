#include <stdio.h>
#define SIZE 8

int main(void)
{
	double arr[SIZE];
	double max;
	int i;

	arr[0] = 0.0;
	arr[1] = 1.0;

	for (i = 2; i < SIZE; i++)
	{
		arr[i] = 2.0 * arr[i - 1] + arr[i - 2];
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%.2f ", arr[i]);
	}
	printf("\n");

	max = arr[SIZE - 1];

	printf("%.2f\n", max);

	return 0;
}




















