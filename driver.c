#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){
  struct node * head = NULL;
  printf("empty list: ");
  print_list(head);

  printf("\ninsert 2: \n");
  head = insert_front(head,2);
  print_list(head);
  printf("\ninsert 4: \n");
  head = insert_front(head,4);
  print_list(head);
  printf("\ninsert 6: \n");
  head = insert_front(head,6);
  print_list(head);

  head = free_list(head);
  printf("\nfree list: \n");
  print_list(head);

  return 0;
}
