#import <assert.h>
#import <stdbool.h>
#import <string.h>
#import "doublyLinkedList.h"

void make_node_returns_struct_with_data() {
  DoublyLinkedNode *node = make_node("spam & eggs");
  assert(0 == strcmp(node->data, "spam & eggs"));
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
