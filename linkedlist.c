#include <stdio.h>
#include <stdlib.h>
//#include "linkedlist.h"

struct node { int i; struct node *next;};

void print_list(struct node * current){
  printf("%d \n", current->i);
  if(current->next){
    print_list(current->next);
  }
}

struct node * insert_front(struct node * current, int add){
  struct node new;
  new.i = add;

  
}

int main(){
  struct node head;
  head.i = 2;

  struct node one;
  one.i = 4;

  head.next = &one;
  one.next = NULL;
  print_list(&head);
}
