#include "main.h"
#include "_putchar.c"

/**
*_puts - print a string
*@str: string to be printed
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
