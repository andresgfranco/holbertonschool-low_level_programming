#include "holberton.h"
/**
  * print_times_table - prints the n times table
  * @n: integer
  * Return: void
**/
void print_times_table(int n)
{
	int x, y, z;

	if (n < 15 && n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (y > 0 && z < 10)
					_putchar (' ');
				if (y > 0 && z < 100)
					_putchar (' ');
				if (z >= 100)
					_putchar (z / 100 + 48);
				if (z >= 10)
				{
					_putchar ((z / 10) % 10 + 48);
					_putchar (z % 10 + 48);
				}
				else
					_putchar(z + 48);
			}
			_putchar('\n');
		}
	}
}
