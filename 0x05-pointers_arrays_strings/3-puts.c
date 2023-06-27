#include "main.h"
/**
 * _puts - print string, followed by a new line, to the  stdout
 * @str: print string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
