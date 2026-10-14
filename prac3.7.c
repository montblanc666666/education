#include <stdio.h>
#include <string.h>
#define a "LinuxDistro"

int main (void)
{
	const char b[5] = "2026";

	printf("DISTRO: %s\nRDATE: %s\nSTRLEN: %zu\nSIZEOF: %zu\n",
			a, b, strlen(a), sizeof(a));

	return 0;
}









