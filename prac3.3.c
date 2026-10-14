#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[33];

	scanf("%32s", name);
	
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%5s%s%5s\"\n", "", name, "");

	return 0;
}
