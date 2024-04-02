#include <stdio.h>
#include "factors.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num;
	FILE *file = fopen(argv[1], "r");

	if (argc != 2) {
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return 1;
	}

	if (file == NULL) {
		fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
		return 1;
	}

	while (fscanf(file, "%d", &num) != EOF) {
		factorize(num);
	}

	fclose(file);

	return 0;
}
