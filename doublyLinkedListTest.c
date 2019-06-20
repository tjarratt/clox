#import <assert.h>
#import <stdbool.h>
#import <string.h>
#import "doublyLinkedList.h"

void make_node_returns_struct_with_data() {
  char *entree = "Spam & eggs";
  char *dessert = "Spam, Spam, Spam";
  DoublyLinkedNode *first = make_node(entree);
  DoublyLinkedNode *second = make_node(dessert);

  assert(0 == strcmp(first->data, "Spam & eggs"));
  assert(0 == strcmp(second->data, "Spam, Spam, Spam"));
}

void insert_node_does_the_right_thing() {
  assert(false);
}

void find_node_does_the_right_thing() {
  assert(false);
}

void delete_node_does_the_right_thing() {
  assert(false);
}
