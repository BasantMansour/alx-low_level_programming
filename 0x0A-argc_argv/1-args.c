#include <stdio.h>

/**
 * main-print this is number of arguments passed
 * @argc: number of commandline argument
 * @argv: pointer to an array of command line
 * Return: 0
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
