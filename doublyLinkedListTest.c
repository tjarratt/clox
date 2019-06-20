#import <assert.h>
#import <stdbool.h>
#import <string.h>
#import "doublyLinkedList.h"


void make_node__returns_struct_with_data() {
  char *entree = "Spam & eggs";
  char *dessert = "Spam, Spam, Spam";
  DoublyLinkedNode *first = make_node(entree);
  DoublyLinkedNode *second = make_node(dessert);

  assert(0 == strcmp(first->data, "Spam & eggs"));
  assert(0 == strcmp(second->data, "Spam, Spam, Spam"));
}

void list_insert_node_end_appends_node_at_the_end() {
  DoublyLinkedNode *appetizer = make_node("Spam");
  DoublyLinkedNode *entree = make_node("Spam & eggs");
  DoublyLinkedNode *dessert = make_node("Spam, Spam, Spam");

  DoublyLinkedList *list = make_list(appetizer);
  assert(appetizer == appetizer->prev);
  assert(appetizer == appetizer->next);

  list_insert_end(list, entree);
  list_insert_end(list, dessert);

  assert(list->first == appetizer);
  assert(list->last == dessert);
  assert( 0 == strcmp("Spam", appetizer->data) );
  assert( 0 == strcmp("Spam", list->first->data) );
  assert( 0 == strcmp("Spam", list->last->next->data) );

  assert( 0 == strcmp("Spam, Spam, Spam", dessert->data) );
  assert( 0 == strcmp("Spam, Spam, Spam", list->last->data) );
  assert( 0 == strcmp("Spam, Spam, Spam", list->first->prev->data) );

  assert( 0 == strcmp("Spam & eggs", entree->data) );
  assert( 0 == strcmp("Spam & eggs", list->first->next->data) );
  assert( 0 == strcmp("Spam & eggs", list->last->prev->data) );
}

void list_find__returns_null_when_string_doesnt_appear_in_any_node() {
  DoublyLinkedNode *appetizer = make_node("Spam");

  DoublyLinkedList *list = make_list(appetizer);
  assert( NULL == list_find(list, "nimporte-quoi") );
}

void list_find__returns_the_first_node_containing_the_string() {
  DoublyLinkedNode *appetizer = make_node("Eggs");
  DoublyLinkedNode *entree = make_node("Spam");
  DoublyLinkedNode *dessert = make_node("Spam");

  DoublyLinkedList *list = make_list(appetizer);
  list_insert_end(list, entree);
  list_insert_end(list, dessert);

  assert( list_find(list, "Spam") == entree );
}

void list_delete__removes_it_and_fixes_references() {
  DoublyLinkedNode *appetizer = make_node("Spam");
  DoublyLinkedNode *entree = make_node("Spam & eggs");
  DoublyLinkedNode *dessert = make_node("Lobster Thermidor aux crevettes");

  DoublyLinkedList *list = make_list(appetizer);
  list_insert_end(list, entree);
  list_insert_end(list, dessert);

  list_delete(list, entree);

  assert( list->first == list->last->prev );
  assert( list->last == list->first->next );
}

void list_delete__updates_first_pointer() {
  DoublyLinkedNode *appetizer = make_node("Spam");
  DoublyLinkedNode *entree = make_node("Spam & eggs");
  DoublyLinkedNode *dessert = make_node("Lobster Thermidor aux crevettes");

  DoublyLinkedList *list = make_list(appetizer);
  list_insert_end(list, entree);
  list_insert_end(list, dessert);

  list_delete(list, appetizer);

  assert( list->first == entree );
}

void list_delete__updates_last_pointer() {
  DoublyLinkedNode *appetizer = make_node("Spam");
  DoublyLinkedNode *entree = make_node("Spam & eggs");
  DoublyLinkedNode *dessert = make_node("Lobster Thermidor aux crevettes");

  DoublyLinkedList *list = make_list(appetizer);
  list_insert_end(list, entree);
  list_insert_end(list, dessert);

  list_delete(list, dessert);

  assert( list->last == entree );
}

