
#include <stdio.h>
#include <stdlib.h>

int getValueFromArray(int *array, int len, int index);

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int *array = numbers;
    int len = 5;
    int index;
    int value;

    printf("Enter the index: ");
    scanf("%d", &index);

    value = getValueFromArray(array, len, index);

    printf("Value is: %d\n", value);


    return 0;
}

int getValueFromArray(int *array, int len, int index) {
    int value;

    if (index < len) {
        value = array[index];
    } else {
        printf("Invalid index.\n");
        value = -1;
    }

    return value;
}

