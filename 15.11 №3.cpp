﻿

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int arr[] = { 1, 2, 3, 4, 5 };
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum *= arr[i];
    }

    cout << "Сумма всех элементов массива: " << sum << std::endl;

    return 0;
}
