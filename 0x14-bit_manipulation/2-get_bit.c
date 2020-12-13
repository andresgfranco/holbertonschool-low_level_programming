#include "holberton.h"
/**
  * get_bit - returns the value of a bit at a given index
  * @n: number to be converted to binary
  * @index: is the index, starting from 0 of the bit you want
  * to get
  * Return: value of the bit at index or -1 if an error ocurred
**/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}