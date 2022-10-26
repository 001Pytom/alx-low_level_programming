#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 *
 * Return: 0 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
