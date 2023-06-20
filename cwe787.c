#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *array;
    int index; 

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    getchar();  /* Consume newline character */

    array = (int*)malloc(size * sizeof(int));

    printf("Enter the index to write: ");
    scanf("%d", &index);
    getchar();  /* Consume newline character */

    array[index] = 42;  /* Potential out-of-bounds write*/

    free(array);
    return 0;
}

