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
	int num;

	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar('\n');
	return (0);
}
