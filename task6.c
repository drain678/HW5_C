#include <stdio.h>

int abs_arr(int arr[], int n){
    int count = 0;
    for (int *ptr = arr; ptr <= arr+n; ptr++) { // пока адрес указателя ptr не выйдет за пределы массива arr. нужно проверять,
    // является ли значение указателя *ptr (*ptr - "*" достать значение ptr) отрицательным числом и умножать его на -1, чтобы сделать положительным и еще увеличивать количество таких умножений - count
        if (*ptr < 0){
            count += 1;
            *ptr *= -1;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // печатаем сначала count
    printf("%d ", abs_arr(arr, n));
    // а теперь обновленный массив
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}