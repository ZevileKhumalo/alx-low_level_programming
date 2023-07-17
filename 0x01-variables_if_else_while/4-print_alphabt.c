#include <stdio.h>
/**
 *main - prints out lowercase alphabets except q and e
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if ((alpha != 'e') && (alpha != 'q')) /*omit printing e and q*/
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
