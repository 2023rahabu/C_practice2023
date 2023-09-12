#include <stdio.h>
int main()
{
	int radius;
	double area;

	printf("please enter radius: ");
	scanf("%i", &radius);
	printf("The given radius is %i\n", radius);
	area = 3.14159 * (radius * radius);

	printf(" The area of a circle with %i\n radius is %f\n", radius,area);
	return 0;
}
