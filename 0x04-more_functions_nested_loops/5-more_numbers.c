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

	for (l = 0; l <= 10; l++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				putchar (49);
			putchar (n % 10 + '0');
		}
		putchar ('\n');
	}
}
