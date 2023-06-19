#include <stdio.h>
#include <stdlib.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	for (int i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
