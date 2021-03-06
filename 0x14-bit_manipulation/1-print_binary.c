#include "holberton.h"
/**
  * print_binary - prints the binary representation
  * of a number
  * @n: integer to be converted
  * Return: void
**/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
