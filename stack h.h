#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 100

void stack_init();
int stack_empty();
int stack_full();
void stack_push(int value);
int stack_pop();

#endif
