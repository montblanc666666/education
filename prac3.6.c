#include <stdio.h>

int main(void)
{
	char s[50];
	int width;

	scanf("%49s %d", s, &width);
	printf("%*s\n%-*s\n",
			width, s, width + 5, s);
	return 0;
}

