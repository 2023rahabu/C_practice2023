#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s);
void rev_string(char *s);
int main(void)
{
	char *s;

	s = "AM RAHAB DOING ALX ";
	puts(s);
	/** below main is for lenght*/
	int len;
	len = strlen(s);
	printf("%d\n", len);
	/**print string in reverse*/
	print_rev(s);

char s1[] = "AM RAHAB DOING ALX ";
 printf("%s\n", s1);
    rev_string(s1);
    printf("%s\n", s1);
	return (0);
}


/** below function  is for printing string*/
void print_string(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		s++;
		i++;
	}
}


/** below function  is for lenght*/
void _strlen(char *s)
{
	int count;
	count = 0;
	while ( s[count] != '\0')
	{
		s++;
		count++;
	}
}



/**function for reversing a string*/
void print_rev(char *s)
{
	int count;
	count = 0;
	int i;
	while (s[count] != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
} 
/** reverse a string*/
void rev_string(char *s)
{
int start;
int end;
int length;
char temp;
length = 0;
while (s[length] != '\0')
{
length++;
}

end = length - 1;
for ( start = 0 ;start < end; start++, end--)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
}
}
