#include "main.h"

/**
*puts2 - print a string, followed by a new line
*@str: pointer to the be printed
*Return: void
*/
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
