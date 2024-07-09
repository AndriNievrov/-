#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

unsigned long long countAnagrams(char* word) {
    int length = strlen(word);
    unsigned long long totalAnagrams = factorial(length);

    int letterCount[256] = {0};
    for (int i = 0; i < length; i++) {
        letterCount[(int)word[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (letterCount[i] > 1) {
            totalAnagrams /= factorial(letterCount[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    char word[15];

    printf("Введіть слово (кількість букв не перевищує 14): ");
    scanf("%14s", word);

    if (strlen(word) > 14) {
        printf("Кількість букв у слові перевищує 14\n");
        return 1;
    }

    unsigned long long result = countAnagrams(word);
    printf("Кількість можливих анаграм: %llu\n", result);

    return 0;
}

