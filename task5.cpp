#include <iostream>
#include <cmath>

using namespace std;

const int SIZE = 9; 

int main() {
    int arr[SIZE][SIZE] = {0}; 

    int center = SIZE / 2; 

    for (int i = 0; i <= center; ++i) {
        for (int j = center - i; j <= center + i; ++j) {
            if (j == center - i || j == center + i) {
                arr[i][j] = 1;
                arr[SIZE - 1 - i][j] = 1; 
            } else {
                arr[i][j] = 0;
                arr[SIZE - 1 - i][j] = 0; 
            }
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}