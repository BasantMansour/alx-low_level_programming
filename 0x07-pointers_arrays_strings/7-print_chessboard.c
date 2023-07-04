#include "main.h"

/**
 * print_chessboard -  function that prints the chessboard.
 * @a: it is a rows.
*/

void print_chessboard(char (*a)[8])
{
	int e, r;

	for (e = 0; e < 8; e++)
	{
		for (r = 0; r < 8; r++)
		{
			putchar(a[e][r]);
		}
		putchar('\n');
	}
}
