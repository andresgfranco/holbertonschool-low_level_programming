#include "holberton.h"
/**
  * set_bit - sets the value of a bit to 1
  * at a given index
  * @n: number coming to be converted in binary
  * @index: index, starting from 0 of the bit you want
  * to set
  * Return: 1 if success, or -1 if an error ocurred
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_to_change = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	bit_to_change <<= index;

	*n  = bit_to_change | *n;

	return (1);
}
