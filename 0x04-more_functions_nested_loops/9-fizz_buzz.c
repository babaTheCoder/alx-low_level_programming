#include <stdio.h>

/**
 * main - Fizz Buzz code
 *
 * Return: void
 */
int main(void)
{
	int a = 0;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
		a++;
	}
	return (0);
}
