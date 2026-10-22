#include <stdio.h>

double hr_to_day(double hr)
{
	const double HOURS_IN_DAY = 24.0;
	return hr / HOURS_IN_DAY;
}
int main(void)
{
	double value;
	while (scanf("%lf", &value) == 1)
	{
		printf("%.2f\n", hr_to_day(value));
	}
	return 0;
}


