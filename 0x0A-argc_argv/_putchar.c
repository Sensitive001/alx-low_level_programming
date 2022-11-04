#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: The character to print
 *
 * Return:on sucess 1
 * on error, -1 is returned, and errno is set apporiately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
