#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    int diagonalSum = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i == j || i+j==rows-1){
                diagonalSum += matrix[i][j];
            }
        }
    }
    printf("The sum of the diagonal elements is: %d\n", diagonalSum);
    return 0;
}