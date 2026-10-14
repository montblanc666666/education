#include <stdio.h>

int main(void)
{
	char b;

	scanf(" %c", &b);
	printf("CODE_DEC: %d\nCODE_HEX: %x\nCODE_OCT: %o\nUPPER: %c\nNEXT: %c\nPREV: %c\n",
			b, b, b, b - 32, b + 1, b - 1);

	return 0;
}


