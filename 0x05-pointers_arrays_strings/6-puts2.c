#include "main.h"

/**
 * puts2 - prints every characters of string
 *
 * @str: string inputs
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
