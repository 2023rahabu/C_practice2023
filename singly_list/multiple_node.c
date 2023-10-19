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
/*name only represent pointers*/
struct node *nodeA , *nodeB, *nodeC; /*as malloc return a pointe*/
struct node *head;

/*allocate memory for multiple node we asign for each*/
nodeA = (struct node *) malloc(sizeof(struct node));
/*we need tocheck if node one is not empty*/
 nodeB = (struct node *) malloc(sizeof(struct node));
 nodeC = (struct node *) malloc(sizeof(struct node));

/*assign values to the created node*/
/*we know node has 2 parts data and address of adjacent node*/
nodeA->age = 67;
nodeB->age = 47;
nodeC->age = 35;

/*iassigning address value to the nodes A,B,C*/
nodeA->next = nodeB;
nodeB->next = nodeC;
nodeC->next = NULL;

/*create a head which is only a pointer */
head = nodeA;

/*CREATE A TEMPORARLPOINTER TO TRAVERSE THE LIST MEANS WE START FROM THE HEAD*/
struct node *temp;

/*means temp is also point to nodeA as head point to nodeA*/
/*head is just a pointer*/
temp = head;

/*since we know that the end point to know that it's point to null so we need to check if it's not null*/
/*traversing the linked list and printing each member*/
while (temp->next != NULL)
{
printf("%d---->", temp->age);
temp = temp->next;
}
 printf("%d----> \n", temp->age);
}


