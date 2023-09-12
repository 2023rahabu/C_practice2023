#include <stdio.h>
int test(int *a);

int main(void)
{
	int a;
	a = 5;
	
	int *ptrA = &a;
	test(ptrA);

	printf("%d\n", a);
	return 0;
}
int test(int *a)
{
	++*a;
	printf("%d\n", *a);
}	
