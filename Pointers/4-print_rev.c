#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
        int i;
        i = 0;
        while (s[i] != '\0')
        {
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
