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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
		return (&s[i]);

	return (NULL);
}
