#include <stdio.h>

int main() {
    int array[100]; // You can change the array size as needed
    int n, i, position, element;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Input the element to be inserted and its position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position to insert (0-based index): ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 0 || position > n) {
        printf("Invalid position. Element not inserted.\n");
    } else {
        // Shift elements to make space for the new element
        for (i = n; i > position; i--) {
            array[i] = array[i - 1];
        }

        // Insert the element at the specified position
        array[position] = element;
        n++; // Increase the array size

        // Display the updated array
        printf("Updated array:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    return 0;
}
