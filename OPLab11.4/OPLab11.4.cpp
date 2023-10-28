#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int ArrayF[14] = { 14, 5, 2, 8, 10, 3, 7, 12, 1, 6, 9, 4, 11, 13 };

    void swap(int* a, int* b); 

    for (int i = 0; i < 14; i++) {
        int minIndex = i;

        for (int j = i + 1; j < 14; j++) {
            if (ArrayF[j] < ArrayF[minIndex]) {
                minIndex = j;
            }
        }

        swap(&ArrayF[i], &ArrayF[minIndex]);
    }

    for (int i = 0; i < 14; i++) {
        printf("%d ", ArrayF[i]);
    }

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}