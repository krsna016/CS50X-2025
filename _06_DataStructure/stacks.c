#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct {
    int data[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

int push(Stack *s, int value) {
    if (isFull(s)) return 0;
    s->data[++(s->top)] = value;
    return 1;
}

int pop(Stack *s, int *value) {
    if (isEmpty(s)) return 0;
    *value = s->data[(s->top)--];
    return 1;
}

int peek(Stack *s, int *value) {
    if (isEmpty(s)) return 0;
    *value = s->data[s->top];
    return 1;
}

// Example usage
int main() {
    Stack s;
    int val;
    init(&s);
    push(&s, 10);
    push(&s, 20);
    if (pop(&s, &val)) printf("Popped: %d\n", val);
    if (peek(&s, &val)) printf("Top: %d\n", val);
    return 0;
}