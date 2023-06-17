#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A to Z
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char aph = 'a';
	char APH = 'A';

	while (aph <= 'z')
	{
		putchar(aph);
		aph++;
	}

	while (APH <= 'Z')
	{
		putchar(APH);
		APH++;
	}
	putchar('\n');

	return (0);
}
