#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");

	const char a[] = "Сбой матрицы";
	const wchar_t b[] = L"Сбой матрицы";
	
	printf("char  ->  sizeof: %zu bytes, strlen: %zu chars\nwchar ->  sizeof: %zu bytes, wcslen: %zu chars\n",
			sizeof(a), strlen(a), sizeof(b), wcslen(b));
	
	return 0;
}





