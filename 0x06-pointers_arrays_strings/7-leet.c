#include "main.h"

/**
 * leet - check the code for
 * @s: parameter
 * Return: Always 0.
 */

char *leet(char *s)
{
int i;
int j;
char l[] = "aAeEoOtTlL";
char n[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j])
{
s[i] = n[j / 2];
}
}
}
return (s);
}
