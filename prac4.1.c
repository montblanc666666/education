#include <stdio.h>
#define MULT 1000

int main(void)
{
    unsigned int v;

    while (scanf("%u", &v) == 1 && v > 0) 
	{
        printf("%u l %u ml\n", v / MULT, v % MULT);
    }

    return 0;
}








