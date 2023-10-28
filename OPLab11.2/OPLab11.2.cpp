#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int m, n, k;

    printf("Введіть кількість цілих чисел (m): ");
    scanf_s("%d", &m);
    printf("Введіть кількість дійсних чисел (n): ");
    scanf_s("%d", &n);
    printf("Введіть кількість чисел у рядку (k): ");
    scanf_s("%d", &k);
    srand(time(0));

    int minnumber1 = -11, maxnumber1 = 111;
    double minnumber2 = 2.0, maxnumber2 = 6.0;

    printf("Цілі числа:\n");
    for (int i = 0; i < m; i++) {
        int random = rand() % (maxnumber1 - minnumber1 + 1) + minnumber1;
        printf("%d ", random);
        if ((i + 1) % k == 0) {
        }
    }

    printf("\nДійсні числа (з точністю до тисячних):\n");
    for (int i = 0; i < n; i++) {
        double random_float = (double)rand() / RAND_MAX * (maxnumber2 - minnumber2) + minnumber2;
        printf("%.3f ", random_float);
        if ((i + 1) % k == 0) {
        }
    }
    return 0;
}