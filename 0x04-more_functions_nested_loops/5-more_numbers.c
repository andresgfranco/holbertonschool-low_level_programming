#include "holberton.h"
/**
  * more_numbers - prints 10 times the numbers, from 0 to 14
  *
  * Return: void
**/
void more_numbers(void)
{

	int l;
	int n;

	for (l = 0; l <= 9; l++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar (49);
			_putchar (n % 10 + '0');
		}
		_putchar ('\n');
	}
}
