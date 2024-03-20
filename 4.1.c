#include <stdio.h>
#include "stack.h"

int main() {
    stack_init();

    stack_push(10);
    stack_push(20);

    printf("Popped value: %d\n", stack_pop());
    printf("Popped value: %d\n", stack_pop());

    return 0;
}
