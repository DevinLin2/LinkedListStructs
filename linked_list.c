#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

/*
Should take a pointer to a node struct and print out all of the data in the list
*/
void print_list(struct node * n) {
  printf("[ %d, ", n.number);
  while (*n.next != NULL) {
    n = *n.next;
    if (*n.next == NULL) {
      printf("%d ", *n.number);
    } else {
      printf("%d, ", *n.number);
    }
  }
  printf("]");
}
