typedef struct DoublyLinkedNode {
  void *next;
  void *prev;
  char *data;
} DoublyLinkedNode;

typedef struct DoublyLinkedList {
  DoublyLinkedNode *first;
  DoublyLinkedNode *last;
} DoublyLinkedList;

DoublyLinkedNode * make_node(char *data);
DoublyLinkedList * make_list(DoublyLinkedNode *node);

// TODO: 
// insert
// find
// delete
//