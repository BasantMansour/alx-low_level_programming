#include <stdio.h>
#include "main.h"

/**
 * isLower - is determines whether ascii is lower.
 * @m: char.
 * Return: 1 if true 0 if else.
*/

int isLower(char m)

{
	return (m >= 97 && m <= 122);
}

/**
 * isDelimiter - is determines whether ascii is determines.
 * @m: is char.
 * Return: 1 if true 0 if else.
*/

int isDelimiter(char m)
{
	int r;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (r = 0; r < 12; r++)
		if (m == delimiter[r])
			return (1);
	return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 * @s: is char.
 * Return: 1 if true 0 if else.
*/

char *cap_string(char *s)
{
char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
