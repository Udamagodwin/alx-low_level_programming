#include <unistd.h>
/**
*-putchar - writes character c to stdout
*@c: char to be printed
*return: on SUCCESS_1
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
