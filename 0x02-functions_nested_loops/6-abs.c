#include "holberton.h"
/**
  * _abs - computes the absolute value of an integer
  *
  * @n: number
  * Return: 0 on success
**/
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
		return (0);

}
