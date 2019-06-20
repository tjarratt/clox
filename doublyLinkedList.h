typedef struct DoublyLinkedNode {
  struct DoublyLinkedNode *next;
  struct DoublyLinkedNode *prev;
  char *data;
} DoublyLinkedNode;

typedef struct DoublyLinkedList {
  DoublyLinkedNode *first;
  DoublyLinkedNode *last;
} DoublyLinkedList;

DoublyLinkedNode * make_node(char *data);
DoublyLinkedList * make_list(DoublyLinkedNode *node);
void list_insert_node_end(DoublyLinkedList *list, DoublyLinkedNode *node);
DoublyLinkedNode * list_find(DoublyLinkedList *list, char *data);

// TODO: 
// insert
// find
// delete
//
