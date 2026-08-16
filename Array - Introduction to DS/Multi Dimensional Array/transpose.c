#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    int transpose[cols][rows];
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Element at [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("The transpose of the entered matrix is:\n");
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            transpose[i][j] = matrix[j][i];
        }
    }
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}