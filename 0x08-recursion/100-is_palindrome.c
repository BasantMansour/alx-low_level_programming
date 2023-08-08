#include "main.h"
#include <stdio.h>

/**
 * last_index - return the last index in the string
 * @s: pointer of the string
 * Return: int
*/

int is_palindrome(char *s);
int ckeck(char *s, int start, int end, int mod);
int last_index(char *s)
{
	int m = 0;

	if (*s > '\0')
		m += last_index(s + 1) + 1;

	return (m);
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: string to check
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - this make check for palindrome
 * @s: string
 * @start: int move from right to left
 * @end: int move from left to right
 * @mod: int
 * Return: 0 or 1
*/

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
