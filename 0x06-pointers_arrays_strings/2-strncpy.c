#include "holberton.h"
/**
  * _strncpy - Concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: number of characters
  * Return: a pointer to the resulting string dest
**/
char *_strncpy(char *dest, char *src, int n)
{
	int a, b, c;

	for (a = 0; src[a] != '\0'; a++)
	{
	}
	if (n >= a)
	{
		for (b = 0; src[b] != '\0'; b++)
		{
			dest[b] = src[b];
		}
		dest[b] = src[b];
	}
	else
		for (c = 0; c < n; c++)
		{
			dest[c] = src[c];
		}
	return (dest);
}
