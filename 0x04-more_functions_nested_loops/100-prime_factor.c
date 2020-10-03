#include <stdio.h>
/**
  * main - finds and prints the largest prime factor of the number 612852475143
  *
  * Return: 0 if success
**/
int main(void)
{
	long int n = 612852475143;
	long int x;
	long int p;

	for (x = 2; x <= n; x++)
	{
		if ((n % x) == 0)
		{
			p = x;
			n /= x;
			x = 1;
		}
	}
	printf("%ld\n", p);

	return (0);
}
