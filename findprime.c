#include "factors.h"
/**
 * isPrime - Checks if a number is prime
 * @num: The number to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int isPrime(long int num)
{
	long int i;

	if(num <= 1)
		return 0;
	if(num <= 3)
		return 1;

	if(num % 2 == 0 || num % 3 == 0)
		return 0;

	for(i = 5; i * i <= num; i += 6)
	{
		if(num % i == 0 || num % (i + 2) == 0)
			return 0;
	}

	return 1;
}

/**
 * findPrimeFactors - Finds and prints prime factors of n
 * @n: The number for which prime factors are to be found
 */
void findPrimeFactors(long int n)
{
	long int i;

	for(i = 2; i * i <= n; i++)
	{
		if(n % i == 0 && isPrime(i))
		{
			printf("%lld=%lld*%lld\n", n, i, n / i);
			return;
		}
	}
}
