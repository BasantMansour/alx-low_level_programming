include "main.h

/**
* times_table - prints the 9 time table
*/

void times_table(void)
{
	int num, mlt, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (mlt = 0; mlt <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mlt;

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10 ) + '0');
				_putchar((prod % 10 ) + '0');
			}
		}
		_putchar('\n');
	}
}
