#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: is string.
 * Return: string.
*/

char *string_toupper(char *str)
{
	int z;

	for (z = 0; str[z] != '\0'; z++)
	{
		if (str[z] >= 97 && str[z] <= 122)
		{
			str[z] = str[z] - 32;
		}
	}
	return (str);
}
