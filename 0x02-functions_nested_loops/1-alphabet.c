#include "main.h"

/**
 * Main - Entry Point
 *
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: returns 0 on success
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
