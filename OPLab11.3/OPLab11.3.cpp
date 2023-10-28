#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, a, b;

    printf("Введіть кількість елементів масиву (n): ");
    scanf_s("%d", &n);
    printf("Введіть a (нижня межа інтервалу): ");
    scanf_s("%d", &a);
    printf("Введіть b (верхня межа інтервалу, a < b): ");
    scanf_s("%d", &b);

    if (a >= b) {
        printf("Помилка: a повинно бути менше за b.\n");
        return 1;
    }

    srand(time(0));

    int* array = (int*)malloc(n * sizeof(int));

    if (array == NULL) {
        printf("Помилка виділення пам'яті.\n");
        return 1;
    }

    printf("Вхідні дані:\n");
    printf("Кількість елементів масиву (n): %d\n", n);
    printf("Інтервал [a, b]: [%d, %d]\n");
    printf("Елементи масиву:\n");

    for (int i = 0; i < n; i++) {
        array[i] = rand() % (b - a + 1) + a;
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
