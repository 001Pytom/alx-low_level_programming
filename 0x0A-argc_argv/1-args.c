#include <stdio.h>
/**
 * main -> writes the char 
 * @argc: params
 * @argv: an array
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
