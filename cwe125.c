#include <stdio.h>
#include <stdlib.h>

int getValueFromArray(int *array, int len, int index);

int main() {
    int len;
    int index;
    int value;
    int i;
    int numbers;

    printf("Enter the length of the array: ");
    scanf("%d", &len);

    numbers = (int *)malloc(len * sizeof(int));
    if (numbers == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements of the array:\n");
    for (i = 0; i < len; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the index: ");
    scanf("%d", &index);

    value = getValueFromArray(numbers, len, index);

    printf("Value is: %d\n", value);

    free(numbers);

    return 0;
}

int getValueFromArray(int *array, int len, int index) {
    int value;

    if ( index < len) {
        value = array[index];
    } else {
        printf("Invalid index.\n");
        value = -1;
    }

    return value;
}
