#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory area where is stored
 *@src: memory where is copied from
 *@n: number of bytes copied
 *
 *Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
