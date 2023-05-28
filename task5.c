#include <stdio.h>

int main(){
    int row, col, min_ind = 0, max_ind = 0, buff, sum_col = 0;
    scanf("%d %d", &row, &col);

    int arr[row][col];
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    } 
    // сделаем массив для суммы столбцов
    int column_sums[col];
    for (int j = 0; j < col; j++) {
        int sum_col = 0;
        for (int i = 0; i < row; i++) {
            sum_col += arr[i][j];
        }
        column_sums[j] = sum_col;
    }
    // теперь, среди этих сумм нужно найти минимальную и максимальную и присвоить индекс суммы соответствующей переменной
    for (int j = 1; j < col; j++) {
        if (column_sums[j] < column_sums[min_ind]) {
            min_ind = j;
        }
        if (column_sums[j] > column_sums[max_ind]) {
            max_ind = j;
        }
    } 
    // перестановка минимального столбца с максимальным
    for (int i = 0; i < row; i++) {
        buff = arr[i][min_ind];
        arr[i][min_ind] = arr[i][max_ind];
        arr[i][max_ind] = buff;
    }
    // вывод массива
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}