#include <stdio.h>
#include <string.h>

int main(void)
{
	char esc[] = "\x48\x65\x6C\x6C\x6F\t\x57\x6F\x72\x6C\x64\n";

	printf("%s\nSTRLEN: %zu\nSIZEOF: %zu\n",
			esc, strlen(esc), sizeof(esc));

	return 0;
}
			

	
















