#include <iostream>
using namespace std;

int main() {
    const int n = 5;

    int array[n][n] = {0};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j <= i) {
                array[i][j] = i - j + 1;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
