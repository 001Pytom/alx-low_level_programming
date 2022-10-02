#include <stdio.h>
/**
 * main - writes the char 
 * @c: the char to print
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
