#include <stdio.h>
/**
 *main -prints upper and lowercase alphabets a-z and A-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') /*prints lowercase alphabets a-z*/
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z') /*prints uppercase alphabets A-Z*/
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
