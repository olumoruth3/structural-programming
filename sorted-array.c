#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int year[10] = {2009, 2001, 2008, 2006, 2004, 2007, 2002, 2003};
    int n = 8; // Current size of the array
    int i;
    int indexToInsert = 4;
    int indexToDelete = 5;
    
    printf("This is the initial array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", year[i]);
    }
    printf("\n\n\n");

    // Inserting
    if (indexToInsert < 0 || indexToInsert > n) {
        printf("Invalid index for insertion!\n");
    } else {
        // Shifting elements 
        for (i = n; i > indexToInsert; i--) {
            year[i] = year[i-1];
        }
        // Inserting the new number 
        year[indexToInsert] = 2005;
        n++; // Incrementing the size of the array after insertion
        
        // Sorting the array in ascending order using Bubble Sort
        bubbleSort(year, n);
    }
    printf("This is the new array after inserting and sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", year[i]);
    }
    printf("\n\n\n");

    // Deleting element 
    if (indexToDelete < 0 || indexToDelete >= n) {
        printf("Invalid index!\n");
    } else {
        // Shifting elements to overwrite the element at indexToDelete
        for (i = indexToDelete; i < n-1 ; i++) {
           year[i] = year[i+1];
        }
        n--; // Decrementing the size of the array after deletion
    }
    printf("This is the new array after deleting the element at index 5:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", year[i]);
    }
    return 0;
}   
