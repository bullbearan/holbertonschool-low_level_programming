#include "main.h"

/**
 * rot13 - check the code for
 * @s: parameter
 * Return: Always 0.
 */

char *rot13(char *s)
{
int i;
int j;
char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char n[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j])
{
s[i] = n[j];
break;
}
}
}
return (s);
}
