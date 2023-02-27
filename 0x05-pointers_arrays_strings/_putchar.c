#include <unistd.h>
**/
*-putchar - writes character c to stdout
*@c: char to be printed
*Return: on SUCCESS_1
*/
int _putchar(char c)
{
    Return (write(1, &c, 1));
}
