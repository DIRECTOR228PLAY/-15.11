#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int number) {
    return (number == 0) ? 1 : (int)log10(abs(number)) + 1;
}

int main() {
    setlocale(LC_ALL, "");
    int number;
  cout << "Введите число: ";
  cin >> number;
  cout << "Количество цифр в числе " << number << " : " << countDigits(number) << std::endl;
    return 0;
}
S