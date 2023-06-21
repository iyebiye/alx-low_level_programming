#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int fib1 = 1; // First Fibonacci number
	unsigned int fib2 = 2; // Second Fibonacci number
	unsigned int fib_next; // Next Fibonacci number
	int count;

	printf("%u, %u", fib1, fib2); // Print the first two Fibonacci numbers

	for (count = 3; count <= 98; count++)
	{
		fib_next = fib1 + fib2;
		printf(", %u", fib_next);

		fib1 = fib2;
		fib2 = fib_next;
	}

	printf("\n");

	return (0);
}
