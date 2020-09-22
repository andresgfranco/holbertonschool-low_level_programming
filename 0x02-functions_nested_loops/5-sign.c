#include "holberton.h"
/**
  * print_sign - prints the sign of a number
  *
  * @n: number in ascii code
  * Return: 1 if is greater than zero, 0 if is zero and -1 if is les than zero
**/
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar(48);
		return (0);

}
