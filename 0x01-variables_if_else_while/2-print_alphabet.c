#include <stdio-h>

/**
 * main - returns alphabets
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
