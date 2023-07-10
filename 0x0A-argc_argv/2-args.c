#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int k = 0;

	while (argc--)
	{
		printf("%s\n", argv[k]);
		k++;
	}

	return (0);
}
