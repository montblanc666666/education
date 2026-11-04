#include <stdio.h>
#include <ctype.h>

int main (void)
{
	int c;
	unsigned long long a = 0;

	while ((c = getchar()) != EOF && c != '#')
	{
		if (iscntrl(c))
		{
			a++;
		}
	}
	printf("%llu\n", a);
	return 0;
}














