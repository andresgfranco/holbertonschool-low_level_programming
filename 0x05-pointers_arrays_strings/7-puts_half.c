#include "holberton.h"
/**
  * puts_half - prints half of a string
  * @str: string
  * Return: void
**/
void puts_half(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	if ((l % 2) == 0)
	{
		l /= 2;
	}
	else
	{
		l = ((l + 1) / 2);
	}
	for (; str[l] != '\0'; l++)
	{

		_putchar(str[l]);
	}
	_putchar('\n');
}
