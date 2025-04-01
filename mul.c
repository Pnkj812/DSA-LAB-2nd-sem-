#include <stdio.h>

int main() {
    int r1, c1, i, j, k;


    printf("Enter number of rows: ");
    scanf("%d", &r1);
    printf("Enter number of columns: ");
    scanf("%d", &c1);

    int matrix1[r1][c1], matrix2[r1][c1], mul[r1][c1];

    printf("Enter elements for matrix 1:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements for matrix 2:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

  
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            mul[i][j] = 0;
            for (k = 0; k < c1; k++) {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Result matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}