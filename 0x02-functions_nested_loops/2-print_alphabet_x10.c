#include "holberton.h"
/**
  * print_alphabet_x10 - prints 10 times the alphabet
  *
  * Return: void
**/
void print_alphabet_x10(void)
{
	int n;
	int c;

	for (n = 0; n <= 9; n++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}

}
