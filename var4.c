#include <stdio.h>
#define STUD_ID 111260174

int main(void)
{
	printf("Вариант работы 4.1: %lu\nВариант работы 4.2: %lu\nВариант работы 4.3: %lu\nВариант работы 4.4: %lu\nВариант работы 4.5: %lu\n",
			(STUD_ID % 30) + 1, ((STUD_ID + 7) % 30) + 1, ((STUD_ID + 13) % 30) + 1, ((STUD_ID + 19) % 30) + 1, ((STUD_ID + 23) % 30) + 1);

	return 0;
}









































