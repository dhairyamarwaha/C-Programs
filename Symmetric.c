#include <stdio.h>
#include <stdbool.h>
int main(){
    int i,j;
    int n;
    bool isSymmetric = false;

    printf("Enter the matrix size : ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the matrix elements : \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Enter the (%d,%d) element : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

      for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(matrix[i][j] == matrix[j][i]){
                isSymmetric = true;
            }
        }
    }

    if(isSymmetric){
        printf("The matrix is symmetric");
    } else{
        printf("The matrix is not symmetric");
    }


}