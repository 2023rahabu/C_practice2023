#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,sum,sub,mult,div;
	char operator;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter operators - for sub,+add,/div,*mul:");
	scanf(" %c", &operator);

	switch(operator)
	{
		case'+':
			sum = a + b;
			printf("sum of %d and %d is %d\n ",a,b,sum);
			break;
		case'-':
			sub = a - b;
			printf("sub of %d and %d is %d\n",a,b,sub);
			break;
		case'*':
			mult = a * b;
			printf("mul of %d and %d is %d\n",a,b,mult);
			break;
		case'/':
			div = a / b;
			printf("div of %d and %d is %d\n",a,b,div);
			break;
		default:
			printf("enter valid operator");
	}
	getchar();

}


