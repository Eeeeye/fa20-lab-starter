#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *tortoise = head;
    node *hare     = head;

    // As long as hare can advance two steps...
    while (hare != NULL && hare->next != NULL) {
        tortoise = tortoise->next;           // advance by 1
        hare     = hare->next->next;         // advance by 2

        if (tortoise == hare) {
            // they met → there is a cycle
            return 1;
        }
    }
    // hare reached end of list → no cycle
    return 0;
}

