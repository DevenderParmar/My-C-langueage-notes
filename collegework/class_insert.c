#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
} node;

node* addfirst(node *head, int value)
{
  node *n = (node *)malloc(sizeof(node));
  n->data = value;
  n->next = head;
  head = n;
  return head;
}

node *addlast(node *head, int value)
{
  node *n = malloc(sizeof(node));
  n->data = value;
  n->next = NULL;
  if (head == NULL)
  {
    head = n;
    return head;
  }
  node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = n;
  return head;
}

void printlist(node *head)
{
  node *p = head;
  while (p != NULL)
  {
    printf("%d\n", p->data);
    p = p->next;
  }
}

int main()
{
  node *head = NULL;

  head = addfirst(head, 10); // we are doing this because the function in which we are sending the head cant modify it
  head = addfirst(head, 20); // thats why we are manually reassigning it.
  head = addfirst(head, 30);

  head = addlast(head, 40);
  head = addlast(head, 50);
  printlist(head);
  return 0;
}
