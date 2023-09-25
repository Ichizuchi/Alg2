#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

int main() {
    double time_spent = 0.0;
    clock_t begin = clock();

    setlocale(LC_ALL, "Rus");
    int n;
    int *fib;

    cout << "Введите количество чисел Фибоначчи для генерации:";
    cin >> n;
    fib = new int[n];

    if (n <= 0) {
        cout <<" Пожалуйста, введите положительное целое число.\n";
        return 0; 
    }
    
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }


    printf("Последовательность Фибоначчи:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    printf("\n");
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Затраченное время: %f секунд", time_spent);

    return 0; 
}
