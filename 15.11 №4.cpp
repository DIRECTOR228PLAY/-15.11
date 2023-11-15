using namespace std;
#include <iostream>

int main()
{
    setlocale(LC_ALL, "");
    int a;
    cout << "введите число: " << endl;
    cin >> a;
    if (a > 0 && a != 0)
    {
        cout << "ваше число положительное";
    }
    else if (a < 0 && a != 0)
    {
        cout << "ваше число отрицательное";
    }
    else if (a == 0)
    {
        cout << "ваше число 0";
    }
}