#include <stdio.h>
#include "../functions.h"
#include "../data.h"
#include <stdlib.h>
#include <string.h>



void myPrint(node **head,node **tail,node **current){

	printf("Pressed print");
    struct node  *temp = (struct node *)malloc(sizeof(struct node));
	temp = *head;
	
	while(temp != NULL){
	    
	    
	    printf("\n%d\n",temp->age);
	    temp = (temp)->next;
	    
	}
}
