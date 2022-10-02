#include <stdio.h>
/**
 * main - prints its name
 * @argc: param
 * @argv: an array of a command listed
 * Return: 0 on sucees
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
