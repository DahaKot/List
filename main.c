#include "list.h"

int main() {
    struct List *list = List_Construct();

    int i = 0;
    List_AddFirst(list, 5);

    List_AddAfter(list, list->head, 6);

    List_AddLast(list, 7);
    List_AddLast(list, 8);

    list->tail->prev = list->head->next;

    List_Dump(list, __LINE__);

    List_Destruct(&list);

    return 0;
}