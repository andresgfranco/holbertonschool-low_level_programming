#include "holberton.h"
/**
  * _strstr - function that locates a substring
  * @haystack: main string
  * @needle: substring
  * Return: pointer to the beginning of substring or NULL
  * if not found
**/
char *_strstr(char *haystack, char *needle)
{
	int p, i, j;

	p = compare(haystack, needle);

	if (p == 1)
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			for (j = 0; haystack[i] == needle[j]; j++)
			{
				return (&needle[j]);
			}
		}
	}

	return (NULL);
}
/**
  * compare - determine if there is a similar substring
  * @haystack: main string
  * @needle: substring
  * Return: 0 if there is a substring
  * 1 if not
**/

int compare(char *haystack, char *needle)
{
	int l, m = 0;

	for (l = 0; haystack[l] != '\0'; l++)
	{
		if (haystack[l] == needle[m])
		{
			for (; haystack[l] == needle[m]; m++)
			{
				if (haystack[l + 1] == needle[m + 1])
					continue;
				else
					return (0);
			}
		}
	}
	return (1);
}
