#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a to z
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char aph = 'a';

	while (aph <= 'z')
	{
		if (aph == 'e' || aph == 'q')
			aph++;
		putchar(aph);
		aph++;
	}
	putchar('\n');
	return (0);
}
