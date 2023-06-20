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

    /* Prompt the user to input data for obj1 */
    printf("Enter data for obj1: ");
    scanf("%d", &(obj1->data));
    getchar();  /* Consume newline character */

    obj1->function = function1;

    /* Prompt the user to input data for obj2 */
    printf("Enter data for obj2: ");
    scanf("%d", &(obj2->data));
    getchar();  /* Consume newline character */

    obj2->function = function2;

    free(obj1);
    obj1 = obj2;  /* Pointing obj1 to the same address as obj2 */

    printf("Data: %d\n", obj1->data);

    /* Prompt the user to press enter before calling the function */
    printf("Press enter to call the function...\n");
    getchar();  /* Wait for user input */

    obj1->function();  /* Calling the function through obj1 pointer */

    free(obj2);  /* Free obj2 after calling the function */

    return 0;
}

