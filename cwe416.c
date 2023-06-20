#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    void (*function)();
} Object;

void function1() {
    printf("Function 1\n");
}

void function2() {
    printf("Function 2\n");
}

int main() {
    Object* obj1 = (Object*)malloc(sizeof(Object));
    Object* obj2 = (Object*)malloc(sizeof(Object));

    obj1->data = 10;
    obj1->function = function1;

    obj2->data = 20;
    obj2->function = function2;

    free(obj1);
    obj1 = obj2;  /* Pointing obj1 to the same address as obj2 */

    /* Accessing obj1 after free can lead to unexpected behavior */
    printf("Data: %d\n", obj1->data);

    obj1->function();  /* Calling the function through obj1 pointer */

    return 0;
}
