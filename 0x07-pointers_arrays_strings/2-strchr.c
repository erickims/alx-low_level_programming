#include "main.h"
/**
 * _strchr - Entry point
 * @s: string to be searched
 * @c: character to locate
 * Return: Returns a pointer to occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
