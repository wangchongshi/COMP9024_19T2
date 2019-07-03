//
// Created by Rui on 2019-06-30.
//
#include "list.h"
// 1->2->3->4
// 1<->2<->4<->4
struct node {
    int data;            // 4
    struct node *next;   // 8
    struct node *previous;

    double money;
};

// 1<->2<->3


struct _list {

    Node *header;   // 4
    Node *tail;     // 4
    int length;     // 4

};

typedef struct _list *List;


// 5->4->3->2->1

// 5
// 4
// 3
// 2
// 1
Node createNode(int value) {

    Node header = malloc(sizeof(struct node)); // 16

    if (header !=NULL) {
        header->data = value;
        header->next = NULL;
    }

    return header;
}

List createList() {

    List list = malloc(sizeof(struct _list)); // 16

    if (list !=NULL) {
        list->header = NULL;
        list->tail = NULL;
    }

    return list;
}

// [1->2->3->4->5]

void insert(List list,int value) {

                                8,8,8
   Node header = list;


    list = malloc(100M)

            malloc(100M)







            realloc(list,100M);



    if (list!=NULL) {

        Node new_node = createNode(value);

        if (list->header == NULL) {
            list->header = new_node;
            list->tail = new_node;
            list->length = 1;
        } else {
            list->tail->next = new_node;
            list->tail = new_node;
            list->length++;
        }

    }
}


int lengthList(List list) {
    int length = 0;
    if (list!=NULL) {
        length = list->length;
    }
    return length;
}

// 2->2->2->3->4->4
void insert(Node header,int value) {
    if (header!=NULL) {
        // 1 header is null
        Node temp_node = header;
        // 1->2->3->NULL
        while (temp_node->next!=NULL) {
            temp_node = temp_node->next;
        }
        Node next_node = malloc(sizeof(struct node)); // 16

        next_node->data = value;
        // 3
        temp_node->next = next_node;
    }
}

// 2->2->2->3->4->4
int length(Node header) {
    int length = 0;
    if (header!=NULL) {
        // 1 header is null
        Node temp_node = header;
        // 1->2->3->NULL
        while (temp_node!=NULL) {
            length++;
            temp_node = temp_node->next;
        }
    }

    return length;
}

// 2->2->2->3->4->4
void insert_no_duplicate(Node header,int value) {
    if (header!=NULL) {
        // 1 header is null
        Node temp_node = header;
        // 1->2->3
        while (temp_node->next!=NULL) {
            if (temp_node->data == value){
                return;
            }
            temp_node = temp_node->next;
        }
        Node next_node = malloc(sizeof(struct node)); // 16

        next_node->data = value;
        // 3
        temp_node->next = next_node;
    }
}

// 2->2->2->3->4->4
void delete(Node header,int value) {
    //
    if (header!=NULL) {
        // 1 header is null
        // 判断header
        if (header->data == value) {
            // 2->NULL
            return header->next;
        }else {
            // 1,2,2->NULL
            Node temp_node = header;
            // 1->2->3
            while (temp_node->next != NULL) {
                if (temp_node->next->data == value) {
                    Node freeNode = temp_node->next;
                    temp_node->next = temp_node->next->next;

                    free(freeNode);
                    break;
                }
                temp_node = temp_node->next;
            }
        }
    }
}

// 链表排序
// 1.拿到length
// 2.array
// 3.array
// 4.sort array
// 5 set back


/**
 *
 * @param list
 */
void display(List list) {
    if (list !=NULL && list->length >0) {
        Node temp_node = list->header;
        while(temp_node!=NULL) {
            printf("%d\n",temp_node->data);
        }
    }
}


void freeList(List list) {
    if (list !=NULL) {

        Node temp_node = list->header;

        while (temp_node!=NULL) {

            Node freeNode = temp_node;

            temp_node = temp_node->next;

            free(freeNode);
        }



        free(list);
    }


}



