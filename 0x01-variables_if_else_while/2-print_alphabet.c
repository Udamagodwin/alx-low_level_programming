#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * more headers goes there
 * main - A program that print alphabet lower case
 *Return: Always 0
*/

int main(void)
{
	char lc;
	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
