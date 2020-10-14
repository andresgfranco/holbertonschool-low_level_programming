#include "holberton.h"
/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: first string
  * Return: NULL on failer or pointer to concatenated string
**/
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j]; j++)
	{}
	for (i = 0; s2[i]; i++)
	{}

	concatenated = (char *)malloc((j + i + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		concatenated[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concatenated[j] = s2[i];
		j++;
	}

	concatenated[j] = '\0';
	return (concatenated);
}
