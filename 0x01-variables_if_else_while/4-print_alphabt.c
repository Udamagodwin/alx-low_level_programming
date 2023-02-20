
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * more headers goes there
 * main - A program that print alphabet lower and upper case
 *Return: Always 0
*/

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		if (la != 'e' && la != 'q')
			{
			putchar(la);
			}
	putchar('\n');
	return (0);
}

