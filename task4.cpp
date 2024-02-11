#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

int main() {
    int arr[ROWS][COLS];
    int count = 1;

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if ((i + j) % 2 != 0) {
                arr[i][j] = 0;
            } else {
                arr[i][j] = count;
                count = (count % 9) + 1; 
            }
        }
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
