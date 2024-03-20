#include "stack.h"

static int stack[STACK_SIZE];
static int top = -1;

void stack_init() {
    top = -1;
}

int stack_empty() {
    return top == -1;
}

int stack_full() {
    return top == STACK_SIZE - 1;
}

void stack_push(int value) {
    if (!stack_full()) {
        top++;
        stack[top] = value;
    }
}

int stack_pop() {
    int value = 0;
    if (!stack_empty()) {
        value = stack[top];
        top--;
    }
    return value;
}
