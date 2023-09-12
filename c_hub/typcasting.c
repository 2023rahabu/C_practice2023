//typecasting(change some datatype of certain value) 
//serious math a program for a chicken company a company wants a software to know how many douzen of eggsa chicken they produce per a day each night a guy enter how many eggs they got and the output is how many douzen that is?
#include <stdio.h>
int main()
{
	 printf ("The number of eggs corrected today: ");

	 int eggs;
	 scanf("%i", &eggs);

	// double dozen = eggs / 12; //(without typecasting means we will be dividing interger with integer wich will convert result to integer still like if collected eggs are 18 --> 18/12 = 1.000 which was suppossed to be 1.5000;
	 // typecasting
	 double dozen = (double) eggs / 12;
	 printf(" You have collected %f dozen of eggs.\n", dozen);

	return 0;
}
