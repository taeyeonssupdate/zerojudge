#include <stdio.h>

int main(int argc, char const *argv[]){
    int row, col, array[100][100];
    while (scanf("%d%d", &row, &col) != EOF){
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                scanf("%d", &array[j][i]);
            }
        }
        for (int i = 0; i < col; i++){
            for (int j = 0; j < row; j++){
                printf("%d ", array[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
