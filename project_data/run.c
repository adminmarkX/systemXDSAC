#include <stdio.h>
#include "functions.h"
#include "data.h"

int main(void){


	int ch,flag=0;
	node *head,*tail,*current;

// this is the first step when we want to init a user data
	printf("%d\n",init(&head,&tail,&current));
	
	if(init(&head,&tail,&current)){
		flag=1;
		printf("hello");
	}else{
		flag=0;
	}

// this is the menu for later use after the initialization
	while(flag){
		printf(
			"1)Add a person"
			"2)Edit"
			"3)Delete"
			"4)Print"
			"5)FlushToDB"
			"6)Sort"
			);
		scanf("%d",&ch);
		switch(ch){

		// if we want to add a person
		case 1:
			// _add(&head,&tail,&current);
			break;
		// if we want to edit a person
		case 2:
			// _edit();
			break;
		// if we want to delete a person
		case 3:
			// _delete();
			break;
		// if we want to print all the data
		case 4:
			// _print();
			break;
		// if we want from the memory to flush the data to the db
		case 5:
			// _flushdb();
			break;

		// if we want to sort the data that we have ( more sorting options later)
		case 6:
			// _sort();
			break;

		// if we want to close the program
		default:
			flag=0;
			break;
		}
}
return 0;

}