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
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
