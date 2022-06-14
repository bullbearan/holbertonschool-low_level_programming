#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	int firstDigit, secondDigit, thirdDigit;
	int comma = ',';
	int space = ' ';

	for (firstDigit = '0'; firstDigit <= '9'; ++firstDigit)
	{
		for (secondDigit = '0'; secondDigit <= '9'; ++secondDigit)
		{
			{
				for (thirdDigit = '0'; thirdDigit <= '9'; ++thirdDigit)
				{
				if (firstDigit < secondDigit && secondDigit < thirdDigit)
					{
				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);
					if (firstDigit != '7')
				{
						putchar(comma);
						putchar(space);
				}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
