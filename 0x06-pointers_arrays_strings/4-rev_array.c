#include "holberton.h"
/**
  * reverse_array - reverse the content of an array of integers
  * @a: array of integers
  * @n: number of elements of the array
  * Return: void
**/
void reverse_array(int *a, int n)
{
	int i, b, e;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
	b = a[i];
	e = a[n];

	a[i] = e;
	a[n] = b;
	n--;
	}
}
