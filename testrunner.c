#import <stdio.h>
#import "testrunner.h"

void print_results();

int main(int argc, char **argv) {
  make_node__returns_struct_with_data();
  list_insert_node_end_appends_node_at_the_end();
  list_find__returns_null_when_string_doesnt_appear_in_any_node();
  list_find__returns_the_first_node_containing_the_string();
  list_delete__removes_it_and_fixes_references();
  list_delete__updates_first_pointer();
  list_delete__updates_last_pointer();

  print_results();
  return 0;
}

void print_results() {
  printf("\n");
  printf("   SWEET suite success!\n");
  printf("     ლ ( ◕  ᗜ  ◕ ) ლ\n");
  printf("\n");

  printf("  ▄█▄    █    ████▄     ▄\n");
  printf(" █▀ ▀▄  █    █   █ ▀▄   █\n");
  printf(" █   ▀  █    █   █   █ ▀  \n");
  printf(" █▄  ▄▀ ███▄ ▀████  ▄ █   \n");
  printf(" ▀███▀      ▀      █   ▀▄ \n");
  printf("                   ▀     \n");
  printf("\n");
}
