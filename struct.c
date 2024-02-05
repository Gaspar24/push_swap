typedef struct {
    int *elements;
    int size;
} Stack;

Stack *create_stack(int max_size) {
    Stack *stack = malloc(sizeof(Stack));
    stack->elements = malloc(max_size * sizeof(int));
    stack->size = 0;
    return stack;
}

void push(Stack *stack, int element) {
    stack->elements[stack->size] = element;
    stack->size++;
}

int pop(Stack *stack) {
    if (stack->size == 0) {
        // Handle stack underflow
        return -1;
    }
    int element = stack->elements[stack->size - 1];
    stack->size--;
    return element;
}

int check_size(Stack *stack) {
    return stack->size;
}