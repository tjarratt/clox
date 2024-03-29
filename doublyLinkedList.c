#import "doublyLinkedList.h"
#import <stdlib.h>
#import <strings.h>

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

void list_insert_end(DoublyLinkedList *list, DoublyLinkedNode *node) {
  DoublyLinkedNode *first_node = list->first;
  DoublyLinkedNode *last_node = list->last;

  first_node->prev = node;
  last_node->next = node;

  node->prev = last_node;
  node->next = first_node;

  list->last = node;
}


void list_insert_after(DoublyLinkedList *list, DoublyLinkedNode *node, DoublyLinkedNode *newNode) {
  DoublyLinkedNode *next = node->next;
  node->next = newNode;
  next->prev = newNode;
  newNode->prev = node;
  newNode->next = next;

  if (node == list->last) list->last = newNode;
}

DoublyLinkedNode * list_find(DoublyLinkedList *list, char *data) {
  DoublyLinkedNode *node = list->first;
  if (0 == strcmp(data, node->data)) {
    return node;
  }

  do {
    node = node->next;
    if (0 == strcmp(data, node->data)) {
      return node;
    }
  }
  while ( node != list->first );

  return NULL;
}

void list_delete(DoublyLinkedList *list, DoublyLinkedNode *node) {
  DoublyLinkedNode *deleteMe = list_find(list, node->data);
  if ( NULL == deleteMe ) return;

  DoublyLinkedNode *prev = deleteMe->prev;
  DoublyLinkedNode *next = deleteMe->next;

  prev->next = next;
  next->prev = prev;

  if (deleteMe == list->first) { list->first = next; }
  if (deleteMe == list->last) { list->last = prev; }

  free(deleteMe);
}

