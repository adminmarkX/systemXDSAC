#include "../functions.h"
#include "../data.h"
#include <stdio.h>
#include <stdlib.h>


// insert at head 
void myAdd(node **head,node **tail,node **current){

	if(*head == NULL){
	
    	struct node  *temp = (struct node *)malloc(sizeof(struct node));
	
	    printf("Give your age : ");
	    scanf("%d",&temp->age);

	    temp -> prev = NULL;
	    temp -> next = NULL;
	    
	    // makes the head and tail as an initialization nodes
	    (*head) = temp;
	    (*tail) = temp;
	    
	    
	    printf("\nINTO ADD %p\n",head);
	    printf("\nINTO ADD %p\n",&head);
	   
	}
	
	
    else if(*head != NULL){
	
    	struct node  *temp = (struct node *)malloc(sizeof(struct node));
	
	    printf("Give your age : ");
	    scanf("%d",&temp->age);
	    (*current) = temp;
	   
	   // INSERT AT HEAD 
	    // (*current)->next = (*head);
	    // (*head)->prev = (*current);
	    // *head = *current;

	    // INSERT AT TAIL
	     (*current)->prev = (*tail);
	     (*tail)->next = (*current);
	     *tail = *current;
	    
	}
	
}
