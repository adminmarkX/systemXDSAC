// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "data.h"

int myinit(node **head,node **tail,node **current);
void myAdd(node **head,node **tail,node **current);
void myAdd2(node **head,node **tail,node **current);
void myEdit(node **head,node **tail,node **current);
void myDelete(node **head,node  **tail,node **current);
void mySort(node **head,node **tail,node **current);
void myPrint(node **head,node **tail,node **current);

void myFlushdb(node **head,node **tail,node **current);
void myCheckdata(node **current);
void myMemory(node **head,node **tail);

// Shared constants or macros
#define BUFF 20

#endif // FUNCTIONS_H
