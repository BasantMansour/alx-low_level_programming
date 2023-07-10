#include <stdio.h>
#include <stdlib.h>

/**
 * main - it all starts here
 * @argc: the number of the argument
 * @argv: array of the pointer
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	char *d;

	while (--argc)
	{
		for (d = argv[argc]; *d; d++)
			if (*d < '0' || *d > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
