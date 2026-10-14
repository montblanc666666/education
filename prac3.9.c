#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	wchar_t a[65];
	wscanf(L"%64ls", a);
	wprintf(L"Агент %ls авторизован в системе\n", a);
	
	return 0;
}

