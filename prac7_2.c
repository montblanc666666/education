#include <stdio.h>

int main(void)
{
	int c;
	unsigned long long t = 0;
	unsigned long long s = 0;
	
	while ((c = getchar()) != EOF)
	{
		t++;
		
		if (c == '.' || c == '!' || c == '?')
			s++;
	}

	printf("Количество предложений: %llu\nКоличество обработанных символов: %llu\n",
			s, t);
	return 0;
}



























