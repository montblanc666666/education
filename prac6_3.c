#include <stdio.h>
#include <locale.h>
int main(void)
{
	int a, cp = 0, co = 0, sump = 0, sumo = 0;
	
	while (1)
	{
		scanf("%d", &a);

		if (a == 0)
		{
			break;
		}

		if (a >= 10 && a <= 99) 
		{
			if (a / 10 == a % 10)
			{
				cp++;
				sump += a;
			}
			else
			{
				co++;
				sumo += a;
			}
		}
	}
	printf("Poly count: %d\n", cp);

	if (cp > 0)
	{
		printf("Poly mean: %.2f\n", (double)sump / cp);
	}
	
	printf("Other count: %d\n", co);

	if (co > 0)
	{
		printf("Other mean: %.2f\n", (double)sumo / co);
	}
	return 0;
}


