#include <stdio.h>

/**
 * main - print the number of arg
 * @argc: the input number the main taked
 * @argv: the string that main taked
 * Return: 0 if true
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
