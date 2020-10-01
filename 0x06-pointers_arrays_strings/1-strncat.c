#include "holberton.h"
/**
  * _strncat - Concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: number of characters
  * Return: a pointer to the resulting string dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int s1, s2;

	for (s1 = 0; dest[s1] != '\0'; s1++)
	{
	}
	for (s2 = 0; s2 < n; s2++)
	{
		dest[s1] = src[s2];
		s1++;
	}
	return (dest);
}
