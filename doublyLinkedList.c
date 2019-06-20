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
