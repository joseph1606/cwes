#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    int *array;
    int index; 
    int value;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    getchar();  /* Consume newline character */

    array = (int*)malloc(size * sizeof(int));

    printf("Enter the index to read: ");
    scanf("%d", &index);
    getchar();  /* Consume newline character */

    value = array[index];  /* Potential out-of-bounds read */
    printf("Value at index %d: %d\n", index, value);

    free(array);
    return 0;
}

