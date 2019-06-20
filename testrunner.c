#import <stdio.h>
#import "testrunner.h"

void print_results();

int main(int argc, char **argv) {
  make_node_returns_struct_with_data();

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
