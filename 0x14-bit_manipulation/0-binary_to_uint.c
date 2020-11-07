#include "holberton.h"
/**
  * binary_to_uint - converts a binary number to unsigned int
  * @b: string of 0 and 1 chars
  * Return: converted number of 0 if there is
  * one or more chars in the string b that is not 0 or 1
  * or b is NULL
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_n = 0, p = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = i - 1; i != 0; i--)
	{
		converted_n += (b[i] - '0') * _pow_recursion(2, p);
		p++;
	}
	converted_n += (b[i] - '0') * _pow_recursion(2, p);
	return (converted_n);
}

/**
 * _pow_recursion - value of x raised to the power of y
 * @x: integer
 * @y: power
 * Return: int
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
