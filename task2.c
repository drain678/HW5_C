#include <stdio.h>

struct Person
{
	int age; // возраст
	char name[30]; // имя
};

float averageAge(struct Person arr[], int n) {
    float average = 0;
    for (int i = 0; i < n; i++){
        average += arr[i].age; // чтобы взять возраст, нужно обращение через точку к полю age i-го человека в массиве стуктур
    }
    return average / n; // возвращение среднего значения возраста
}

int main(){
    int n;
    scanf("%d", &n);
    struct Person people[n]; // массив people из структур Person
    for (int i = 0; i < n; i++){
        scanf("%s %d", people[i].name, &people[i].age); // каждый элемент массива people будет содержать поля age и name, определенные в структуре Person
    }
    printf("%.2f", averageAge(people, n));
    return 0;
}