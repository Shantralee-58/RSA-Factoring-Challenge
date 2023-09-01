#include <stdio.h>
#include <stdlib.h>
#include "factorize.h"

/**
 * File: factors.c
 * Description: Factorize all the things!
 *
 * Usage: factors <file>
 * where <file> is a file containing natural numbers to factor.
 * One number per line.
 * Output format: n=p*q
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Usage: %s <file>\n", argv[0]);
	return (1);
	}
	FILE *file = fopen(argv[1], "r");

	if (file == NULL)
	{
	perror("Error opening file");
	return (1);
	}
	char line[20];

	while (fgets(line, sizeof(line), file))
	{
	int number = atoi(line);

	factorize(number);
	}
	fclose(file);
	return (0);
}
