#include "factors.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2) 
	{
		printf("Usage: %s <input_file>\n", argv[0]);
		return 1;
	}

	FILE *file = fopen(argv[1], "r");
	if (file == NULL)
	{
		perror("Error opening file");
		return (1);
	}

	long long n;
	while (fscanf(file, "%lld", &n) != EOF)
	{
		findPrimeFactors (n);
	}

	fclose (file);

	return (0);
}
