#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

/*
Should take a pointer to a node struct and print out all of the data in the list
*/
void print_list(struct node * n) {
  printf("[ %d, ", n.number);
  while (n -> next != NULL) {
    n = n -> next;
    if (n -> next == NULL) {
      printf("%d ", n -> number);
    } else {
      printf("%d, ", n -> number);
    }
  }
  printf("]");
}

/*
Should take a pointer to the existing list and the data to be added,
create a new node and put it at the beginning of the list.
The second argument should match whatever data you contain in your nodes.
Returns a pointer to the beginning of the list.
*/
struct node * insert_front(struct node * n, int data) {
  struct node * front = malloc(sizeof(struct node));
  front -> number = data;
  front -> next = n;
  return front;
}

/*
Should take a pointer to a list as a parameter and then go through the entire list freeing each node
and return a pointer to the beginning of the list (which should be NULL by then).
*/
struct node * free_list(struct node * n) {
  struct node * placeholder = a;
  free(n);
  while (n -> next != NULL) {
     printf("freeing node: %d\n", n -> number);
     n = n -> next;
  }
  return placeholder;
}
