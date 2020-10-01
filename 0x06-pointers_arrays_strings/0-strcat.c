#include "holberton.h"
/**
  * _strcat - function that concatenates two strings
  * @dest: destination string
  * @src: source string
  * Return:  pointer to the resulting string dest
**/
char *_strcat(char *dest, char *src)
{
	int s1, s2, i;

	for (s1 = 0; dest[s1] != '\0'; s1++)
	{
	}
	for (s2 = 0; src[s2] != '\0'; s2++)
	{
	}
	for (i = 0; i <= s2; i++)
	{
		dest[s1] = src[i];
		s1++;
	}
	return (dest);
}
