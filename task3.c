#include <stdio.h>

struct Move
{
	int x;
	int y;
};

struct Move getFinishPoint(struct Move arr[], int n){
    struct Move finalpoint = {0, 0}; // введем пременную для финальной точки
    for (int i = 0; i < n; i++){ // в цикле обновляются координаты финальной точки, путем обращения к полям .x и .y i-го элемента в массиве структур
        finalpoint.x += arr[i].x;
        finalpoint.y += arr[i].y;
    }
    return finalpoint; 
}

int main(){
    int n;
    scanf("%d", &n);
    struct Move movements[n];
    for (int i = 0; i < n; i++){ // заполнение массива элементами i из структур с полями х и у
        scanf("%d %d", &movements[i].x, &movements[i].y);
    }
    printf("%d %d\n", getFinishPoint(movements, n).x, getFinishPoint(movements, n).y);
    return 0;
}