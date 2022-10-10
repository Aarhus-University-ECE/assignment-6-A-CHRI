#include <stdio.h>  /*printf*/
#include <assert.h> /*assert*/
#include <stdlib.h> /*malloc*/

typedef struct node {
  int data;
  struct node *next;
} node;

void add(node *head, int x){
  /*pre: head points to the first, empty element. The last element's next is NULL
    post: a new node containing x is added to the end of the list*/
  assert(head!=NULL);
  node *p = head;
  while (p->next!=NULL) {
    p = p->next;
  } /*p points to the last element*/
  node *element = (node*) malloc(sizeof(node));
  element->next = NULL;
  element->data = x;
  p->next = element; 
}

int size(node *l)
{
    // Excercise 3 b )
    node *p = l;
    int size = 0;
    while (p->next != NULL)
    {
        size++;
        p = p->next;
    }
    return size;
}

void printout(node *l)
{
    /* pre : head points to the first , empty element . The last element ’s next is NULL
    post : the values of the list are printed out */
    node *p = l->next;
    while (p != NULL)
    {
        printf(" %d , ", p->data);
        p = p->next; /* Iterate to the next node */
    }
    printf("\n");
}

int largest(node *l)
{
    /* pre : head points to the first, empty element. The last element’s next is NULL.
    size (l > 0)
    post : returns the largest value of the list */
    assert(l->next != NULL);
    node *p = l->next;
    int largest = p->data;
    while (p->next != NULL)
    {
        p = p->next;
        if (p->data > largest)
        {
            largest = p->data;
        }
    }
    return largest;
}

