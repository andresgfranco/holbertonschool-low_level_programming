#include "holberton.h"
/**
  * print_last_digit - computes the absolute value of an integer
  *
  * @n: number
  * Return: n last digit
**/
int print_last_digit(int n)
{
	if (n > 0)
	{
		n = n % 10;
		_putchar (n + '0');
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		n = n % 10;
		_putchar(n + '0');
		return (n);
	}
	else
		_putchar ('0');
		return (n);
}
