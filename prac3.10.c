#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");

	wchar_t a[100];
	wchar_t b[100];
	wchar_t c[100];
	
	wscanf(L"%99ls %99ls %99ls", a, b, c);
	wprintf(L"%-15ls|%20ls|%.5ls\n", a, b, c);
	
	return 0;
}



