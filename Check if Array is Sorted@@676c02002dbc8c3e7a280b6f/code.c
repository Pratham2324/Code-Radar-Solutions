#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isIncreasing = 1;  
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            isIncreasing = 0;  
            break;
        }
    }
    if (isIncreasing) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}
