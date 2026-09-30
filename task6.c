#include <stdio.h>

#define DAYS_IN_YEAR 365;
#define HOURS_IN_DAY 24;
#define SECONDS_IN_HOUR 3600;
signed main(void)
{
	int age = 18;
	int days = age * DAYS_IN_YEAR;
	int hours = days * HOURS_IN_DAY;
	int seconds = hours * SECONDS_IN_HOUR;

	printf("Тики: %d |Часы: %d |Дни: %d |Годы: %d\n",
			seconds, hours, days, age);
	return 0;
}


