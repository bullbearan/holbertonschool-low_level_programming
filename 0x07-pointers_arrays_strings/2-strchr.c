#include "main.h"
/**
 * _strchr - check the code
 * @s: parameter
 * @c: parameter
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
{
return (s);
}
}
return (0);
}
