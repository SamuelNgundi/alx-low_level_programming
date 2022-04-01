#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments used in our code
 * @argc: number of arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		prntf("%d\n", argc - 1);
	}
	return (0);
}
