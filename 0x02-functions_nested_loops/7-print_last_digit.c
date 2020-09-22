#include "holberton.h"
/**
  * print_last_digit - computes the absolute value of an integer
  *
  * @n: number
  * Return: n last digit
**/
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
	{
		m = m * -1;	
	}
	_putchar(m + 48);
	return (m);
}
