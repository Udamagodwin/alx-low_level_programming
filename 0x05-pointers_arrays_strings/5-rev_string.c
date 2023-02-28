
#include "main.h"

/**
*rev_string - function that reverses a string
*@s: string to reversed
*Return: nothing
*/
void rev_string(char *s)
{
	char rv;
	int aut = 0;
	int i = 0;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aut < i)
	{
		rv = s[i];
		s[i] = s[aut];
		s[aut] = rv;
		aut++;
		i--;
	}
}
