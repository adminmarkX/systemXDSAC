// functions.h
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "data.h"

int _init(node **head,node **tail,node **current);
void _add(node **head,node **tail,node **current);
void _edit(node **head,node **tail,node **current);
void _delete(node **head,node  **tail,node **current);
void _sort(node **head,node **tail,node **current);
void _checkdata(node **current);
void _memory(node **head,node **tail);

// Shared constants or macros
#define BUFF 20

#endif // FUNCTIONS_H
