#include "holberton.h"
/**
  * swap_int - swaps the values of two integers
  * @a: integer
  * @b: integer
  * Return: void
**/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
