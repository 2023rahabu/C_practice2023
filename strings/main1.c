#include <stdio.h>
int main()
{
	int i;

	char *four_planet[4] = {"Mercury", "Venus", "Earth", "Mars"};
	for (i = 0; i < 4; i++)
	{
		if (four_planet[i][0] == 'M')
		{
			printf("%s Begins with M\n", four_planet[i]);
		}
	}
	return 0;
}

