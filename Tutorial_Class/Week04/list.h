//
// Created by Rui on 2019-06-30.
//

typedef struct node *Node;

typedef struct _list *List;


List createList();

void insert(List list,int value);

int lengthList(List list) ;

void display(List list);