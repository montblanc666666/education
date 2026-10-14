#include <stdio.h>
#include <string.h>

int main(void)
	{
		char s[20] = "SibSUTIS";
		printf("SIZEOF: %zu\nSTRLEN: %zu\nFREE_BYTES: %zu\n",
				sizeof(s), strlen(s), sizeof(s) - strlen(s) -1);
		
		char o[20] = "СибГУТИ";
		printf("\nSIZEOF: %zu\nSTRLEN: %zu\nFREE_BYTES: %zu\n",
				sizeof(o), strlen(o), sizeof(o) - strlen(o) -1);
		return 0;
	}
