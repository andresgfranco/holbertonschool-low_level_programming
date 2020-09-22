#include "holberton.h"
/**
  * times_table - prints the 9 times table
  *
  * Return: void
**/
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y > 0 && z < 10)
			{
				_putchar(' ');
			}
			if (z >= 10)
			{
				_putchar((z / 10) + 48);
				_putchar((z % 10) + 48);
			}
			else
				_putchar(z + 48);
			if (y < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
