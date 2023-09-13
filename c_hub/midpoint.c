#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void puts_half(char *str);
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}
void puts_half(char *str)
{
	int length;
	int midpoint;
	int i;
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{

		midpoint = (length) / 2;
	}
	else
	{
		midpoint = (length - 1) / 2;
	}
	for (i = midpoint; i < length; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
