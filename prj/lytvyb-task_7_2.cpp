#include <stdio.h>

int main() {
    int numbers[15];
    int sum = 0;
    int count = 0;

    printf("Введіть 15 натуральних чисел:\n");
    for (int i = 0; i < 15; i++) {
        int num;
        if (scanf("%d", &num) != 1 || num <= 0) {
            printf("Некоректне введення. Введіть натуральне число.\n");
            while (getchar() != '\n');
            i--; 
            continue;
        }
        numbers[i] = num;
        sum += numbers[i];
        count++;
    }

    if (count < 15) {
        printf("Введено недостатню кількість чисел. Потрібно ввести ще %d чисел.\n", 15 - count);
        return 1;
    }

    float average = (float)sum / 15;

    numbers[4] = average;

    printf("Змінений масив:\n");
    for (int i = 0; i < 15; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
