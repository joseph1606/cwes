#include <stdio.h>

#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15
#define MAX_SSN_LENGTH 12
#define MAX_PEOPLE 10

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    char phoneNumber[MAX_PHONE_LENGTH];
    char ssn[MAX_SSN_LENGTH];
} Person;

int main() {
    Person people[MAX_PEOPLE];
    int numPeople;

    printf("Enter the number of people: ");
    scanf("%d", &numPeople);

    // Validate number of people
    if (numPeople < 1 || numPeople > MAX_PEOPLE) {
        printf("Invalid number of people.\n");
        return 1;
    }

    // Read data for each person
    for (int i = 0; i < numPeople; i++) {
        printf("\nPerson %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]s", people[i].name);

        printf("Enter age: ");
        scanf("%d", &people[i].age);

        printf("Enter phone number: ");
        scanf(" %[^\n]s", people[i].phoneNumber);

        printf("Enter SSN: ");
        scanf(" %[^\n]s", people[i].ssn);
    }

    // Print the details of all people
    printf("\nPeople Information:\n");
    for (int i = 0; i < numPeople; i++) {
        printf("\nPerson %d\n", i + 1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Phone Number: %s\n", people[i].phoneNumber);
        printf("SSN: %s\n", people[i].ssn);
    }

    return 0;
}
