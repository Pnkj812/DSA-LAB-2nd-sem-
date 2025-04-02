#include <stdio.h>

int main() {
    int row, col, i, j;
    int size = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);

    int sparse[row][col];

    printf("Enter Sparse matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &sparse[i][j]);
        }
    }

    // Count nonzero elements
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (sparse[i][j] != 0) {
                size++;
            }
        }
    }

    printf("Size of nonzero elements: %d\n", size);

   
    int compact[3][size];
    int k = 0;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (sparse[i][j] != 0) {
                compact[0][k] = i;
                compact[1][k] = j;
                compact[2][k] = sparse[i][j];
                k++;
            }
        }
    }

    // Print compact matrix row-wise
    printf("Compact Matrix Representation (row-wise):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < size; j++) {
            printf("%d ", compact[i][j]);
        }
        printf("\n");
    }

    // Print compact matrix column-wise
    printf("Compact Matrix Representation (column-wise):\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", compact[j][i]);
        }
        printf("\n");
    }

    return 0;
}
