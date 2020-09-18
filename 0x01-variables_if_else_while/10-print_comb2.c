#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the numbers from 00 to 99
 *
 * Return: 0
 **/
int main(void)
{
	int c;
	int i;

	for (c = 48; c <= 57; c++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(c);
			putchar(i);
			if (c == 57 && i == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
