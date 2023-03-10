#include "main.h"

/**
*int _atoi - function that convert a string to integer
*@str: string to convert
*Return: int
*/
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sigro = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '.')
			sigro *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	sigro *= -1;
	return (n * sigro);
}
