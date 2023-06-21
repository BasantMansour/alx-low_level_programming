include "main.h

/**
* times_table - prints the 9 time table
*/

void times_table(void)
{
	int num, mlt, pro;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mlt = 0; mlt <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');

			pro = num * mlt;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar(pro);
		}
		_putchar('\n');
	}
}
