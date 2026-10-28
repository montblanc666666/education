#include <stdio.h>
#define H 5

int main(void)
{
	int mid = H / 2;
	int i, j;
	int d, spc, smb;

	for (i = 0; i < H; i++)
	{
		d = (i > mid) * (i - mid) + (i < mid) * (mid - i);

	    spc = mid - d;
		smb = 2 * d + 1;

		for (j = 0; j < spc; j++)
		{
			printf(" ");
		}

		for (j = 0; j < smb; j++)
		{
			printf("&");
		}

		printf("\n");
	}
	return 0;
}
