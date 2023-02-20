#include <stdio.h>
/**
 * more headers goes there
 * main - A program that print alphabet lower case
 *Return: Always 0
*/

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le++)
	{
		putchar(le);
	}
	putchar('\n');
	return (0);
}
