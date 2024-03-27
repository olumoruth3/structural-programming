#include <stdio.h>
/*
ENE212-0091/2021
RUTH OLUMO
*/
int main () {
int matrix_A[3][3], matrix_B[3][3], result[3][3];
    int i,j,m,n,k;
    printf("Enter the elements of the first matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element [%d][%d]:", i,j);
            scanf("%d", &matrix_A[i][j]);
        }
    }
    printf("Matrix A:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t", matrix_A[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the second matrix\n");
    for(m=0;m<3;m++){
        for(n=0;n<3;n++){
            printf("Enter element[%d][%d]:", m,n);
            scanf("%d", &matrix_B[m][n]);
        }
    }
    printf("Matrix B\n");
    for(m=0;m<3;m++){
        for(n=0;n<3;n++){
            printf("%d\t", matrix_B[m][n]);
        }
        printf("\n");
    }
    printf("The result of the multiplication is:\n");
    for(i=0;i<3;i++){
        for(n=0;n<3;n++){
            result[i][n]=0;
            for(k=0;k<3;k++){
                result[i][n]=+ matrix_A[i][k]*matrix_B[k][n];
            }
            printf("%d\t", result[i][n]);
        }
        printf("\n");
    }
    return 0;
}