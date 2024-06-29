
// the init function is resposible to initialize
// the memory for welcoming the node data that we have
#include <stdio.h>
#include "data.h"
#include "functions.h"

int myinit(node **head,node **tail,node **current){

	printf("\nINITIALIZATION\n");
	*head = NULL;
	*tail = NULL;
	*current = NULL;
	return 1;

}
