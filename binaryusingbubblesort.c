#include <stdio.h>

int main() {
    int n, i, j, temp, target;
    
    
    printf("Enter Size:\n");
    scanf("%d", &n);
    
    
    printf("Enter Target Value:\n");
    scanf("%d", &target);
    
    int arr[n];
    
    
    printf("Enter Array Elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            printf("\nElement Found at position: %d\n", mid + 1);
            return 0;
        } 
        else if (arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    printf("\nElement Not Found\n");
    
    return 0;
}
