#include <stdio.h>

int main() {
    int t1, t2, t3;

    printf("Введіть три значення:\n");

    // Отримуємо вхідні дані
    scanf("%d %d %d", &t1, &t2, &t3);

    double total_rate = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    double time_to_eat_pie = 1.0 / total_rate;

    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time_to_eat_pie);

    return 0;
}



