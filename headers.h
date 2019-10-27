struct node {int number; struct node * next;};
void print_list(struct node * n);
struct node * insert_front(struct node * n, int data);
// Should take a pointer to the existing list and the data to be added, create a new node and put it at the beginning of the list.
// The second argument should match whatever data you contain in your nodes.
// Returns a pointer to the beginning of the list.
struct node * free_list(struct node * n);
// Should take a pointer to a list as a parameter and then go through the entire list freeing each node and return a pointer to the beginning of the list (which should be NULL by then).
struct node * remove_node(struct node * front, int data);
// Remove the node containing data from the list pointed to by front.
// If data is not in the list, nothing is changed.
// Returns a pointer to the beginning of the list.
