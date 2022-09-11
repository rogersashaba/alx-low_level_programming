#include <stdio.h>
/**
 * main - entry point
 *
 * A program that prints a-z using putchar
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	/* declaring place holder for a-z */
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
