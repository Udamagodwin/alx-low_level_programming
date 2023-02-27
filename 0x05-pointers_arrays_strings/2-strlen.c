#include "main.h"

/**
*_strlen - Return the length of strings
*@a: strings
*return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);

}
