#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int val;
  struct Node *prev;
  struct Node *next;
} Node;

typedef struct List {
  int len;
  Node *head;
  Node *tail;
} List;

Node *nodeCreate(int value) {
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->val = value;
  temp->next = NULL;
  temp->prev = NULL;
  return temp;
}

List *listCreate() {
  List *temp = (List *)malloc(sizeof(List));
  temp->len = 0;
  temp->head = NULL;
  temp->tail = NULL;
  return temp;
}

void listPushFront(List *list, int item) {}

void listPushBack(List *list, int item) {
  Node *temp = nodeCreate(item);

  if (list->head == NULL || list->tail == NULL) {
    list->head = temp;
    list->tail = temp;
  } else {
    list->tail->next = temp;
    temp->prev = list->tail;
    list->tail = temp;
  }

  list->len++;
}

Node *listPopFront(List *list) {}

Node *listPopBack(List *list) {}

void listInsert(List *list, int value, int index) {}

void listPrint(List *list, int direction) {
  printf("len (%d): ", list->len);
  Node *current = direction == 0 ? list->head : list->tail;
  while (current != NULL) {
    printf(direction == 0 ? "[%d] -> " : "<- [%d] ", current->val);
    current = direction == 0 ? current->next : current->prev;
  }
  printf("\n");
}

#endif