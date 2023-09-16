#include "main.h"

/**
 * main - entry point
 *
 * Description: function print the number
 *		1 to 100 but if div by 3
 *		will print Fizz if div by 5
 *		will print Buzz
 *
 * Return: return (0) (succsses)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && !(num % 5 == 0))
		{
			printf("Fizz");
		}
		else if ((num % 5 == 0) && !(num % 3 == 0))
		{
			printf("Buzz");
		}
		else if ((num % 5 == 0) && (num % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
