#include "main.h"
/**
*_strlen - Return the length of strings
*@a: strings
*return: length
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);

}
