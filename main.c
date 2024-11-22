#include <stdio.h>

int main(void){
    int rowmat1, columnmat1, rowmat2, columnmat2, collector;
    printf("\nPlease Enter Sizes of Matrix 1.\n");
    printf("Row = ");
    scanf("%d", &rowmat1);
    printf("Column = ");
    scanf(" %d", &columnmat1);
    printf("\nPlease Enter Sizes of Matrix 2.\n");
    do{
        printf("Row = ");
        scanf("%d", &rowmat2);
        printf("Column = ");
        scanf(" %d", &columnmat2);
        if(columnmat1 != rowmat2){
            printf("ERROR: Doing Matrix Multiplication The Matrix1's Column Must Equal to The Matrix2's Row.\nPlease Enter Please Enter Sizes of Matrix 2 Again.\n");
        }
    }while(columnmat1 != rowmat2);
    int mat1[rowmat1][columnmat1];
    int mat2[rowmat2][columnmat2];
    int matrix[rowmat1][columnmat2];
    printf("\nPlease Enter Values of Matrix 1.\n");
    for(int row = 0; row < rowmat1; row++){
        for(int column = 0; column < columnmat1; column++){
            scanf(" %d", &mat1[row][column]);
        }
    }
    printf("\nPlease Enter Values of Matrix 2.\n");
    for(int row = 0; row < rowmat2; row++){
        for(int column = 0; column < columnmat2; column++){
            scanf(" %d", &mat2[row][column]);
        }
    }
    printf("\nRESULT.\n");
    for(int row = 0; row < rowmat1; row++){
        for(int column = 0; column < columnmat2; column++){
            matrix[row][column] = 0;
            for(int time = 0 ; time < columnmat1; time++){
                collector = 0;
                collector = mat1[row][time]*mat2[time][column];
                matrix[row][column] = matrix[row][column] + collector;
            }
            printf("%d ", matrix[row][column]);
        }
        printf("\n");
    }
    return 0;
}
