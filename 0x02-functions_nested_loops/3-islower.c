#include "main.h"

/**
  * _islower - prints if number is positive, 0 or negative
  * @c: charecter
  * Return: 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
