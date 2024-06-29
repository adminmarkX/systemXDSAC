// data.h
#include "functions.h"
#ifndef DATA_H
#define DATA_H

#define BUFF 20

struct node{
	int age;
	char name[BUFF];
	struct node *next;
	struct node *prev;
};

typedef struct node node;

#endif // DATA_H


