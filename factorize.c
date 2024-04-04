#include <stdio.h>
#include <math.h>
#include "factors.h"

void factorize(long int num)
{
	int i;

	for (i = 2; i <= square_root(num); i++)
	{
		if (num % i == 0)
		{
			long int factor1 = i;
			long int factor2 = num / i;
			printf("%d=%d*%d\n", num, factor1, factor2);
			return;
		}
	}
	printf("%d=%d*1\n", num, num);
}
