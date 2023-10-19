#include <stdio.h>
#include <stdlib.h> /*for malloc*/

/*first thing create a template*/
/*define structure for node as template for our node*/
/*we can even create it's typedef*/
struct node
{
int age;
struct node *next; /*pointer to the next*/
};



int main(void)
{
/*declare a node as it's structure type will be struct*/
/* we declare pointer to that node*/

struct node *nodeA; /*as malloc return a pointe*/
struct node *head;
/*allocate memory for the node*/

nodeA = (struct node *) malloc(sizeof(struct node));

/*assign values to the created node*/
/*we know node has 2 parts data and address of adjacent node*/

nodeA->age = 67;
/*if there is only one node then the address will be null*/
nodeA->next = NULL;

/*create a head which is only a pointer */


}



