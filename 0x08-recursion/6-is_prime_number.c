#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if n and deep if are the prime number
 * @n: int number
 * @deep: int a number
 * Return: 0 or 1
*/

int check_prime(int n, int deep);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


/**
 * check_prime - check all number and check a deep
 * @n: int
 * @deep: int
 * Return: 1 or 0
*/


int check_prime(int n, int deep)
{

	if (deep >= n && n > 1)
		return (1);
	else if (n % deep == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, deep + 1));
}
