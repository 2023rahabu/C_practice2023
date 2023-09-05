#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int lenght;
	lenght = 0;


	while (*s != 0)
	{
		lenght++;
		*s++;
	}
	return lenght;


}
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
