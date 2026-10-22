#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;
	unsigned long long sum = 0;

	scanf("%d", &n);

	while (i <= n)
	{
		unsigned long long p = 1;
		int k = 0;

		while (k < i)
		{
			p *= i;
			k++;
		}

		sum += p;
		i++;
	}
	printf("%llu\n", sum);

	return 0;
}


