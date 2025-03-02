#include <stdio.h>
#include <stdlib.h>





typedef  struct node{
  int value;
  struct node* next;

}node;

void printList(node *head);
node* newLinkedList();
void append(node **head, int value);




int main(){
  
  node* head = newLinkedList();
  append(&head, 3);
  append(&head, 2);
  append(&head, 5);
  append(&head, 100);
  append(&head, 232342%232);

  printList(head);



  return 0;
}


void append(node **head, int value){
  node* n = malloc(sizeof(node));
  n->value = value;
  n->next  = NULL;
  if (*head == NULL){
    *head = n;
  }
  else{
    node* lastNode = *head;
    while (lastNode->next != NULL) {
      lastNode = lastNode->next;
    }

    lastNode->next = n;

  }

}



node* newLinkedList(){
  node *head = NULL;
  return head;
}




void printList(node *head){
  if (head == NULL) return;
  node n = *head;
  while (1) {
    printf("%d\n", n.value);
    if (n.next == NULL) break;
    n = *n.next;
  }
}

