﻿#include <iostream>
#include <locale.h>
#include <time.h>

int NativeGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return NativeGCD(b, a % b);
}

int main() {
    double time_spent = 0.0;
    clock_t begin = clock();

    setlocale(LC_ALL, "Rus");
    int num1, num2;

    std::cout << "Введите два числа что найти для них НОД: ";
    std::cin >> num1 >> num2;

    int gcd = NativeGCD(num1, num2);

    std::cout << "НОД of " << num1 << " и " << num2 << " это " << gcd << std::endl;
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Затраченное время: %f секунд", time_spent);

    return 0; 
}
