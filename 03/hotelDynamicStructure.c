#include <stdio.h>
#include <stddef.h>

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    int count;
    Node* head;
} LinkedList;

LinkedList* initialize_linked_list();
void destroy_linked_list(LinkedList*);
void print_linked_list(LinkedList*);
void print_node(Node*);
void insert_node(LinkedList*, int);
void remove_node(LinkedList*, Node*);

int main(int argc, char* argv[]) {
    LinkedList* linked_list = initialize_linked_list();
    if (!linked_list)
        return 1;

    insert_node(linked_list, 1);
    print_linked_list(linked_list);
    insert_node(linked_list, 2);
    print_linked_list(linked_list);
    insert_node(linked_list, 3);
    print_linked_list(linked_list);
    
    remove_node(linked_list, linked_list->head->next);
    print_linked_list(linked_list);
    destroy_linked_list(linked_list);
    print_linked_list(linked_list);

    return 0;
}

LinkedList* initialize_linked_list() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    if (list != NULL) {
        list->count = 0;
        list->head = NULL;
    }
}

void destroy_linked_list(LinkedList* list) {
    if (list == NULL)
        return;
    
    Node* current = list->head;
    while (current != NULL) {
        Node* next = current->next;
        remove_node(list, current);
        current = next;
    }
}

void print_linked_list(LinkedList* list) {
    if (list == NULL)
        return;
    
    Node* current = list->head;
    while (current != NULL) {
        print_node(current);
    }
}

void remove_node(LinkedList* list, Node* node) {
    free(node);
}