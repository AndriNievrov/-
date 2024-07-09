#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int r;

    printf("Введіть кількість чисел:\n");
    scanf("%d", &r);

    if (r < 2 || r > 20) {
        printf("Кількість чисел повинна бути між 2 та 20.\n");
        return 1;
    }

    int numbers[r];

    printf("Введіть числа:\n");
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = numbers[0];

    for (int i = 1; i < r; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}