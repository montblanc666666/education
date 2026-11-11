#include <stdio.h>

long long recursive(long long n, long long res)
{
	if (n == 0)
	{
		return res;
	}
	return recursive(n / 10, res * 10 + n % 10);
}

long long iterative(long long n)
{
	long long res = 0;
	while (n > 0)
	{
		res = res * 10 + n % 10;
		n = n / 10;
	}
	return res;
}

int main(void)
{
	long long n;

	if (scanf("%lld", &n) != 1 || n < 0)
	{
		printf("Ошибка");
		return 1;
	}
	printf("Рекурсивно: %lld\n", recursive(n, 0));
	printf("Итеративно: %lld\n", iterative(n));
	return 0;
}



















