#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

/*
Should take a pointer to a node struct and print out all of the data in the list
*/
void print_list(struct node * n) {
  printf("[ ");
  while (n != NULL) {
    if (n -> next == NULL) {
      printf("%d ", n -> number);
    } else {
      printf("%d, ", n -> number);
    }
    n = n -> next;
  }
  printf("]\n");
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
  struct node * placeholder = n;
  while (n != NULL) {
    //printf("freeing node: %d\n", placeholder -> number);
    placeholder = placeholder -> next;
    free(n);
    n = placeholder;
  }
  return n;
}

/*
Remove the node containing data from the list pointed to by front.
If data is not in the list, nothing is changed.
Returns a pointer to the beginning of the list.
*/
struct node * remove_node(struct node *front, int data) {
  if (front == NULL) {
    return front;
  }
  // cases where the number is at the front
  if (front -> number == data) {
    struct node * temp = front -> next;
    free(front);
    return temp;
  }
  front -> next = remove_node(front -> next, data);
  return front;
}
