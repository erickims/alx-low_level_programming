#include "main.h"
/**
 * _memset - fill the memory with a specific value
 * @s: the adress memory area to be filled
 * @b: the desired value of char to copy
 * @n: number of times to be copied
 *
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
