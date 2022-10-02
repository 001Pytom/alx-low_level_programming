#include <stdio.h>
/**
 * main - prints name
 * @argc: params
 * @argv: array
 * Return: 0 on succes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
