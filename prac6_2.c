#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	wint_t c;
	unsigned long long ca = 0;
	unsigned long long ce = 0;

	setlocale(LC_ALL, "");
	
	while ((c = getwchar()) != WEOF && c != L'#')
	{
		if (c == L'a')
		{
			ca++;
		}
		else if (c == L'e')
		{
			ce++;
		}
	}
	printf("a: %llu\n", ca);
	printf("e: %llu\n", ce);
	return 0;
}
