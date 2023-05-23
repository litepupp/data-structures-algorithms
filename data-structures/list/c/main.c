#include "list.h"
#include <stdio.h>

int main(void) {
  List *list = listCreate();

  listPrint(list, 0);
  listPrint(list, 1);

  listPushBack(list, 3);

  listPrint(list, 0);
  listPrint(list, 1);

  listPushBack(list, 5);

  listPrint(list, 0);
  listPrint(list, 1);

  return 0;
}