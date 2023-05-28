#include <stdio.h>


void reduce_fraction(int * a, int * b) {
    int max_divider = 0;
    // нужно чтобы делитель i увеличивался до большего числа из двух, т. к. тогда мы точно переберем делители каждого числа
    if (*a >= *b) { 
        for (int i=1; i<=*a; i++){
            if ((*a % i == 0) && (*b % i == 0)) {
                max_divider = i;
            }
        }
    } else {
        for (int i=1; i<=*b; i++){
            if ((*a % i == 0) && (*b % i == 0)) {
                max_divider = i;
            }
        }
    }
    // сократить указатели
    *a = *a / max_divider;
    *b = *b / max_divider;

}

int main() {
    int a, b;
    scanf("%d %d", &a, &b); 
    // проверка, является ли числитель или знаменатель нулем
    if (b == 0) {
        printf("делить на ноль нельзя");
        return 0;
    }
    if (a == 0) {
        printf("нет общего делителя");
        return 0;
    }
    reduce_fraction(&a, &b);
    printf("%d %d", a, b);
    return 0;
}