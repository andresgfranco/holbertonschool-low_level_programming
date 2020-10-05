#include "holberton.h"
/**
  * _strchr - locates a character in a string
  * @s:  string
  * @c: constant character
  * Return: pointer to the first occurrence of c or NULL if not found
**/
char *_strchr(char *s, char c)
{
	int i;
	char *ocurrence;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ocurrence = &s[i];
		}
		else
			ocurrence = '\0';
	}

	return (ocurrence);
}
