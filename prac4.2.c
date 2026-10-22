#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint16_t w, h;
	unsigned long long a;
	scanf("%hu  %hu", &w, &h);
	a = 2 * ((unsigned long long)w + (unsigned long long)h);
	printf("RESULT: %llu\nSIZE_UINT16: %llu\nSIZE_ULL: %llu\n",
			a, (unsigned long long)sizeof(uint16_t), (unsigned long long)sizeof(unsigned long long));
	return 0;
}
	
	













