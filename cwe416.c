#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
} Object;

void print_info(Object* obj) {
    printf("Data from obj: %d\n", obj->data);
}



int main() {
    Object* obj1 = (Object*)malloc(sizeof(Object));
    Object* obj2 = (Object*)malloc(sizeof(Object));

    /* Prompt the user to input data for obj1 */
    printf("Enter data for obj1: ");
    scanf("%d", &(obj1->data));
    getchar();  /* Consume newline character */


    /* Prompt the user to input data for obj2 */
    printf("Enter data for obj2: ");
    scanf("%d", &(obj2->data));
    getchar();  /* Consume newline character */


    /* Access data from obj1 */
    printf("Data from obj1: %d\n", obj1->data);

    /* Prompt the user to press enter before calling the function */
    printf("Press enter return the data: \n");
    getchar();  /* Wait for user input */

    free(obj1);

    print_info(obj1);  /* Calling the function and passing obj1 as an argument */
    print_info(obj2);  /* Calling the function and passing obj2 as an argument */

    free(obj2);

    return 0;
}
