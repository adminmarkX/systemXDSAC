#include <stdio.h>
#include "functions.h"
#include "data.h"




int main(void){

	int ch,flag=0;
	node *head,*tail,*current;

// this is the first step when we want to init a user data	
	if(myinit(&head,&tail,&current)){
		flag=1;
		// printf("hello");
	}else{
		flag=0;
		printf("INIT ERROR ... EXIT \n");
	}

// this is the menu for later use after the initialization
	while(flag){
		printf(
			"1)Add a person\n"
			"2)Edit\n"
			"3)Delete\n"
			"4)Print\n"
			"5)FlushToDB\n"
			"6)Sort\n"
			"0)EXIT\n"
			);
		scanf("%d",&ch);
		switch(ch){

		// if we want to add a person
		case 1:
			myAdd(&head,&tail,&current);
			printf("\n%p\n",&head);
			printf("\n%p\n",head);
			break;
		// if we want to edit a person
		case 2:
			myEdit(&head,&tail,&current);
			break;
		// if we want to delete a person
		case 3:
			myDelete(&head,&tail,&current);
			break;
		// if we want to print all the data
		case 4:
			myPrint(&head,&tail,&current);
			break;
		// if we want from the memory to flush the data to the db
		case 5:
			myFlushdb(&head,&tail,&current);
			break;

		// if we want to sort the data that we have ( more sorting options later)
		case 6:
			mySort(&head,&tail,&current);
			break;

		// if we want to close the program
		default:
			flag=0;
			break;
		}
}
return 0;

}
