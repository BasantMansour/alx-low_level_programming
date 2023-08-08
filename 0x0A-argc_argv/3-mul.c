#include <stdio.h>
#include <stdlib.h>

/**
 * main-print this is sum of 2 numbers
 * @argc: number of command line
 * @argv: pointer to an array of command line
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
