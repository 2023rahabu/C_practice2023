#include <stdio.h>

int main()
{
	char name[30];
	char name1[12];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter yor second name: ");
        scanf("%s", name1);

	printf("Hello %s %s! you look nice\n", name,name1);
	return 0;
}
