#include <stdio.h>

/**
 * main - piging of the program
 *
 * @argc: input of the size of argv
 *
 * @argv: the string input
 *
 * Return: (0) if true
*/

int main(int argc, char const *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
