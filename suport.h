#include<stdlib.h>
#include<string.h>
#include<stddef.h>
#include<stdio.h>
typedef char Data;

struct Node
{
    char val;
    struct Node* next;
};
typedef struct Node Node;

void push(Node**top, Data v);
Data pop(Node**top);
int isEmpty(Node*top);
void deleteStack(Node**top);
