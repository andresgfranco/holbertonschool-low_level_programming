#include <stdio.h>
/**
 * main - prints all the numbers of base 16
 *
 * Return: 0
 **/
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
	putchar(c);
	}
	for (c = 97; c <= 102; c++)
	{
	putchar(c);
	}
	putchar('\n');

	return (0);
}