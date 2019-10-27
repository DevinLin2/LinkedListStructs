#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main() {
  struct node * test = NULL;
  printf("new list: ");
  print_list(test);
  printf("\n");
  for (int i = 0; i < 10; i++) {
    printf("adding int %d to front of list\n", i);
    test = insert_front(test, i);
  }
  printf("\n");
  printf("List with numbers: ");
  print_list(test);
  printf("\n");
  printf("removing 9 from list\n");
  test = remove_node(test, 9);
  print_list(test);
  printf("removing 3 from list\n");
  test = remove_node(test, 3);
  print_list(test);
  printf("removing 0 from list\n");
  test = remove_node(test, 0);
  print_list(test);
  printf("removing 999 from list\n");
  test = remove_node(test, 999);
  print_list(test);
  printf("\n");
  test = free_list(test);
  printf("empty list: ");
  print_list(test);
}
