#include <stdio.h>
int main()
{
	int scores[5] = {5,8,2,3,7};

	printf("%d\n", scores[0]);//this give integer value of index0=5
	printf("%p\n", scores);//point to the address of first element5
printf("%d\n", *(scores + 1));	

	return 0;
}
