#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++){ // заполнение массива элементами
        scanf("%d", &arr[i]);
    }
    int buff;
    for (int i=0; i<n/2; i++) { // переставление первой половины массива со второй местами,
    // из-за того, что сама половина должна остаться такой же, нужно i прибавлять, иначе половина еще сама развернётся
        buff = arr[i];
        arr[i] = arr[n/2+i];
        arr[n/2+i] = buff;
    }
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}