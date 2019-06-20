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

void insert_node_at_end_effectively_appends() {
  DoublyLinkedNode *appetizer = make_node("Spam");
  DoublyLinkedNode *entree = make_node("Spam and Eggs");
  DoublyLinkedNode *dessert = make_node("Spam, Spam, Spam");

  DoublyLinkedList *list = make_list(appetizer);
  assert(appetizer == appetizer->prev);
  assert(appetizer == appetizer->next);

  list_insert_node_end(list, entree);
  list_insert_node_end(list, entree);

  assert(list->first == appetizer);
  assert(list->last == entree);
  assert(0 == strcmp("Spam", appetizer->data));
  assert(0 == strcmp("Spam", list->first->data));
  assert(0 == strcmp("Spam", list->last->next->data));
}

void insert_node_end_handles_empty_list() {
  assert(false);
}

void find_node_does_the_right_thing() {
  assert(false);
}

void delete_node_does_the_right_thing() {
  assert(false);
}
