#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int choice;
    srand(time(0));

    while (1) {
        printf("Оберіть генератор псевдовипадкових чисел (1-10) або введіть 0 для виходу: ");
        scanf_s("%d", &choice);

        if (choice == 0) {
            break;
        }
        else if (choice >= 1 && choice <= 10) {
            double randomNumber;

            switch (choice) {
            case 1:
                randomNumber = ((double)rand() / RAND_MAX) * (3 - (-4)) - 4;
                break;
            case 2:
                randomNumber = (rand() % 200) + 100;
                break;
            case 3:
                do {
                    randomNumber = (rand() % 35) - 35;
                } while ((int)randomNumber % 2 != 0);
                break;
            case 4:
                randomNumber = (rand() % 256) - 128;
                break;
            case 5:
                do {
                    randomNumber = (rand() % 20) - 7;
                } while ((int)randomNumber % 2 == 0);
                break;
            case 6:
                randomNumber = ((double)rand() / RAND_MAX) * (2 * 28.732);
                break;
            case 7:
                randomNumber = (rand() % 201) - 100;
                break;
            case 8:
                randomNumber = (rand() % 49) + 23;
                break;
            case 9:
                randomNumber = ((double)rand() / RAND_MAX) * 2;
                break;
            case 10:
                randomNumber = sqrt(17 + ((double)rand() / RAND_MAX) * (82 - 17));
                break;
            }

            printf("Згенероване число: %f\n", randomNumber);
        }
        else {
            printf("Неправильний вибір. Виберіть число від 1 до 10 або 0 для виходу.\n");
        }
    }

    return 0;
}