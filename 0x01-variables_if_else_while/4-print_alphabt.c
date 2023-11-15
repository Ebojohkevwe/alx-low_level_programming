#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: display alphabets in lower case followed by a
 * new line except q and e
 *
 * Return: 0 if the programme runs to completion
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
	putchar(i);
	putchar('\n');
	return (0);
}
