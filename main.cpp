#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int sizeOfMassive = 5;
    cout << "������� ������ �������: ";
    cin >> sizeOfMassive;
    int numbers[sizeOfMassive];
    cout << "������� 5 �����:" << endl;
    for (int i = 0; i < sizeOfMassive; i++) {
        cout << "����� " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int maximum = numbers[0];
    for (int i = 1; i < sizeOfMassive; i++) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
    }

    cout << "������������ �����: " << maximum << endl;

    return 0;
}
