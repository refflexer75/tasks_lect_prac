#include <iostream>
using namespace std;

int main() {
    const int n = 5; // Размер массива

    // Создаем двумерный массив и заполняем его нулями
    int array[n][n] = {0};

    // Заполняем массив согласно условиям
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j <= i) {
                array[i][j] = i - j + 1;
            }
        }
    }

    // Выводим полученный массив
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
