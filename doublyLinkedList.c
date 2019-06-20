#import "doublyLinkedList.h"
#import <stdlib.h>

DoublyLinkedNode *make_node(char *data) {
  DoublyLinkedNode *node;
  node = malloc(sizeof(DoublyLinkedNode));
  node->prev = NULL;
  node->next = NULL;
  node->data = data;

  return node;
}

DoublyLinkedList *make_list(DoublyLinkedNode *node) {
  DoublyLinkedList *list;
  list = malloc(sizeof(list));

  list->first = node;
  list->last = node;

  node->prev = node;
  node->next = node;

  return list;
}

void list_insert_node_end(DoublyLinkedList *list, DoublyLinkedNode *node) {
  DoublyLinkedNode *first_node = list->first;
  DoublyLinkedNode *last_node = list->last;

  first_node->prev = node;
  last_node->next = node;

  node->prev = last_node;
  node->next = first_node;

  list->last = node;
}

DoublyLinkedNode * list_find(DoublyLinkedList *list, char *data) {
  return NULL;
}

