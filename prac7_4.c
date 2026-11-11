#include <stdio.h>

int skynet(int *a, int *b)
{
	int plus, minus, ostatok;
	if (*a >= *b)
	{
		plus = *a;
		minus = *b;
	}
	else
	{
		plus = *b;
		minus = *a;
	}

	if (minus == 0)
	{
		return 0;
	}

	ostatok = plus % minus;

	*a = ostatok;
	*b = ostatok;

	return 1;
}

int main(void)
{
	int x, y;
	if (scanf("%d %d", &x, &y) != 2)
	{
		return 1;
	}

	printf("До вызова: x = %d, y = %d\n", x, y);
	if (skynet(&x, &y))
		printf("После вызова: x = %d, y = %d\n", x, y);
	else
		printf("Ошибка");
	return 0;
}


