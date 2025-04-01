#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k, choice;

    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2], transpose1[c1][r1], transpose2[c2][r2];

    printf("Enter elements for Matrix 1:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements for Matrix 2:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &mat2[i][j]);

    
    do {
        printf("\nChoose an operation:\n");
        printf("1. Matrix Multiplication\n2. Transpose of Matrix 1\n3. Transpose of Matrix 2\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++) {
                        result[i][j] = 0;
                        for (k = 0; k < c1; k++) {
                            result[i][j] += mat1[i][k] * mat2[k][j];
                        }
                    }
                }

                
                printf("\n Multiplication Result:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c2; j++)
                        printf("%d ", result[i][j]);
                    printf("\n");
                }
                break;

            case 2:
                
                for (i = 0; i < r1; i++)
                    for (j = 0; j < c1; j++)
                        transpose1[j][i] = mat1[i][j];

                
                printf("\nTranspose of Matrix 1:\n");
                for (i = 0; i < r1; i++) {
                    for (j = 0; j < c1; j++)
                        printf("%d ", transpose1[i][j]);
                    printf("\n");
                }
                break;

            case 3:
                
                for (i = 0; i < c2; i++)
                    for (j = 0; j < r2; j++)
                        transpose2[i][j] = mat2[j][i];

                
                printf("\nTranspose of Matrix 2:\n");
                for (i = 0; i < c2; i++) {
                    for (j = 0; j < r2; j++)
                        printf("%d ", transpose2[i][j]);
                    printf("\n");
                }
                break;

            case 4:
                printf("Exit the program\n");
                return 0;

            default:
                printf("Invalid choice\n");
                continue;
        }

    } while (choice != 4); 

    return 0;
}