#include <stdio.h>

int main(void)
{
	unsigned long long a = 1;
	int n;
	int i = 0;

	scanf("%d", &n);

	while (i++ < n)
	{
		printf("%llu ", a);
		a *= 1024;
	}

	printf("\n");

	return 0;
}
	

















