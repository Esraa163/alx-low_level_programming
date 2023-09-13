#include <unistd.h>
#include <main.h>

/**
 * __putchar - write the caracter c to stdout
 * @c: the caracter to print
 *
 * Return: 1 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
