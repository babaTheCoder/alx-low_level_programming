#include "main.h"
#include <stdio.h>

/**
 * main - this is a program that prints the current name of a program
 *
 * @argc: size of arry argv
 * @argv: array of command line arguments
 * Return: 0 always (success)
 */

int main (int argc, char *argv[])
{
	if (argc > 0)
	{
		printf ("%s\n", argv[0]);
	}

	return 0;
}
