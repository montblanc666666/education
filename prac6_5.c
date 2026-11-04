#include <stdio.h>

int main(void)
{
	int c,i;
	double x;

	while (1)
	{
		printf("\nКалькулятор модуля\n");
		printf("1. Модуль\n");
		printf("2. Знак числа\n");
		printf("3. Округление вверх\n");
		printf("4. Округление вниз\n");
		printf("5. Выход\n");
		printf("Выберите пункт меню: \n");

		if (scanf("%d", &c) != 1)
		{
			printf("Ошибка! Введите целое число!\n");
			while ((c = getchar()) == '\n' && c == EOF);
			break;
		}

		if (c < 1 || c > 5)
		{
			printf("Ошибка! Такого пункта нет.\n");
					continue;
		}

		if (c == 5)
		{
			printf("Выход.\n");
			break;
		}

		printf("Введите число: ");

    	if (scanf("%d", &c) != 1)                                                   
		{
         	printf("Ошибка! Введите целое число!\n");
        	while ((c = getchar()) == '\n' && c == EOF);
   			break;
         }

		switch (c)
		{

			case 1:
				if (x < 0)
				{
					x = -x;
				}
				printf("Модуль числа: %.2f\n", x);
				break;

			case 2:
				if (x > 0)
				{
					printf("Знак числа: 1\n");
				}
				else if (x < 0)
				{
					printf("Знак числа -1\n");
				}
				else
				{
					printf("Знак числа: 0\n");
				}
				break;
			
			case 3:
				i = (int)x;

				if (x > i) 
				{
					i++;
				}

				printf("Округление вверх: %d\n", i);
				break;
			
			case 4:
				i = (int)x;

				if (x < i)
				{
					i--;
				}

				printf("Округление вниз: %d\n", i);
				break;
		}
	}
	return 0;
}




