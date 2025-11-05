// Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n, i, j, distinct = 1;

    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n], diag[n];

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct)
            break;
    }

    
    if(distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}