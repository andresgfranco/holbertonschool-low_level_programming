#include <stdio.h>
/**
  * main - prints all possible different combinations of two two digit numbers
  *
  * Return: 0 if success
**/
int main(void)
{
	int x, y, x1, x2, y1, y2;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			x1 = x / 10;
			x2 = x % 10;
			y1 = y / 10;
			y2 = y % 10;
			if (y > x && x != y)
			{
				if (y > 1)
				{
					putchar (',');
					putchar (' ');
				}
				putchar (x1 + 48);
				putchar (x2 + 48);
				putchar (' ');
				putchar (y1 + 48);
				putchar (y2 + 48);
			}
		}
	}
	putchar ('\n');
	return (0);
}
