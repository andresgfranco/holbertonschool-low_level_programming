#include "holberton.h"
/**
  * rev_string - reverse a string
  * @s: string coming
  * Return: void
**/
void rev_string(char *s)
{
	    int l;
	    int i;
	    char c1, c2;

	    for (l = 0; s[l] != '\0'; l++)
	    {
	    }
	    l--;
	    for (i = 0; i <= l; i++)
	    {
	  	    c1 = s[i];
		    c2 = s[l];

		    s[i] = c2;
		    s[l] = c1;
		    l--;					        
	    }
}
