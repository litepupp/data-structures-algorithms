#include "list.h"
#include <stdio.h>

int main(void) {
  List *list = listCreate();

  listPushBack(list, 3);
  listPrint(list, 0);

  listPushFront(list, 5);
  listPrint(list, 0);

  listPushBack(list, 99);
  listPrint(list, 0);

  return 0;
}