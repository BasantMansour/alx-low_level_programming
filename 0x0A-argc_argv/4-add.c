#include <stdio.h>
#include <stdlib.h>

/**
 * main - this all starts here
 * @argv: this number of argument
 * @argv: this is array of pointers
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *g;

	while (--argc)
	{
		for (g = argv[argc]; *g; g++)
			if (*g < '0' || *g > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
