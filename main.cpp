#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int sizeOfMassive = 5;
    cout << "Введите размер массива: ";
    cin >> sizeOfMassive;
    int numbers[sizeOfMassive];
    cout << "Введите числа:" << endl;
    for (int i = 0; i < sizeOfMassive; i++) {
        cout << "Число " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int minimum = numbers[0];
    for (int i = 1; i < sizeOfMassive; i++) {
        if (numbers[i] < minumum) {
            minimum = numbers[i];
        }
    }

    cout << "Минимальный элемент: " << minimum << endl;

    return 0;
}
