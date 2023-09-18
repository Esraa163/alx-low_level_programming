#inclue "main.h"

/**
 * print_number - print an integer
 *
 * @n: the input to be printed
*/

void print_number(int n)
{
	unsigned int num;

	/*first check if its negative*/
	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	else
		num = n;

	/*print the few digit*/
	if (num / 10)
		print_number(num / 10);

	/*print the second digit*/
	_putchar((num % 10) + 48);
}
