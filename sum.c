#include <stdio.h>

int main() {
    int r, c, i, j, choice;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int matrix1[r][c], matrix2[r][c], result[r][c];


    printf("Enter elements for Matrix 1:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &matrix1[i][j]);

    
    printf("Enter elements for Matrix 2:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &matrix2[i][j]);

    
    do {
        
        printf("Choose an operation:\n");
        printf("1. Addition\n2. Subtraction\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                for (i = 0; i < r; i++)
                    for (j = 0; j < c; j++)
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                printf("\nResult (Addition):\n");
                break;

            case 2:
                
                for (i = 0; i < r; i++)
                    for (j = 0; j < c; j++)
                        result[i][j] = matrix1[i][j] - matrix2[i][j];
                printf("\nResult (Subtraction):\n");
                break;

            case 3:
                printf("Exit the program\n");
                return 0;

            default:
                printf("Invalid choice!\n");
                continue;
        }
 
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++)
                printf("%d ", result[i][j]);
            printf("\n");
        }

    } while (choice != 3);

    return 0;
}