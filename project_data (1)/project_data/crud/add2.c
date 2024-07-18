#include "../functions.h"
#include "../data.h"
#include <stdio.h>
#include <stdlib.h>

/* Passing a linked list head through a function as address in C
   Ref:     https://stackoverflow.com/questions/32283200/passing-a-linked-list-head-through-a-function-as-address-in-c */

void myAdd2(node **head,node **tail,node **current){

    printf("Pressed add\n");


    if(*head == NULL){
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        printf("Is on the IF ");

        printf("Give your age : ");
        (temp)->age = 5; 
        printf("The temp->age is : %d ", temp->age);
        temp -> prev = NULL;
        temp -> next = NULL;

        *current = temp;

        printf("\nINTO ADD %p\n",head);
        printf("\nINTO ADD %p\n",&head);

       *head = temp;
    }


     else if(*head != NULL){
        
        printf("Is on the IF ELSE ");
        struct node* temp = (struct node*)malloc(sizeof(struct node));
        struct node* temphead = *head;


        printf("Give your age : ");
        (temp)->age = 5; 
        printf("The temp->age is : %d ", temp->age);

        temp->next = *head;

        temp->prev = NULL;
        temphead->prev = temp;

        *head = temp;
        *current = temp;
        printf("\nINTO ADD %p\n",current);
        printf("\nINTO ADD %p\n",&current);
    }

}
