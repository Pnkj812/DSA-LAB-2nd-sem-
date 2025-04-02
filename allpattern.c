#include <stdio.h>

int main() {
    int choice, n, i, j;

    do {
        
        printf("\nChoose a pattern:\n");
        printf("1. Pattern 1 \n");
        printf("2. Pattern 2 \n");
        printf("3. Pattern 3 \n");
        printf("4. Pattern 4 \n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter the number of rows: ");
            scanf("%d", &n);
        }

        switch (choice) {
            case 1:
                // pattern 1
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= i; j++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                break;

            case 2:
                // Pattern 2
                for (i = n; i >= 1; i--) {
                    for (j = 1; j <= i; j++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                break;

            case 3:
                // Pattern 3
                for (i = 1; i <= n; i++) {
                    for (j = 1; j <= n - i; j++) {
                        printf(" ");  
                    }
                    for (j = i; j >= 1; j--) {
                        printf("%d", j);
                    }
                    for (j = 2; j <= i; j++) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                break;

            case 4:
                // Pattern 4
                for (i = 0; i < n; i++) {
                    for (j = 0; j < i; j++) {
                        printf(" ");
                    }
                    for (j = n - i; j >= 1; j--) {
                        printf("%d", j);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Exit program \n");
                break;

            default:
                printf("Invalid choice! \n");
        }

    } while (choice != 5);

    return 0;
}