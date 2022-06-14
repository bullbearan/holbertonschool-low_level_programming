#include "main.h"
/**
 * _strcmp - check the code
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;
int result;

while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
{
i++;
}
result = s1[i] - s2[i];
return (result);
}
