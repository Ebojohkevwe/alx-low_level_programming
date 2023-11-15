#include <stdio.h>
/**
 * main - This is the entry point
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: 0 if the programme runs to completion
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
	putchar(i);
	putchar('\n');
	return (0);
}
