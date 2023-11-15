#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all base 16 in lowercase
 *
 * Return: 0 if the programme runs to completion
 */

int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	putchar(i);
	for (i = 0 ; i <= 5; i++)
	putchar('a' + i);
	putchar('\n');
	return (0);
}
