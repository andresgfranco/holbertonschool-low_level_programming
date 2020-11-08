#include "holberton.h"
/**
  * flip_bits - returns the number of bits you would
  * need to flip to get from one number to another
  * @n: first number
  * @m: second number
  * Return: the number of bits you would need to flip
  * to get from one number to another
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int comparison;
	int i = 0;

	comparison = n ^ m;

	while (comparison)
	{
		i += comparison & 1;
		comparison >>= 1;
	}
	return (i);
}
