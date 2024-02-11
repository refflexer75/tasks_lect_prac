#include <iostream>
using namespace std;

int main() 
{
    srand(time(0));
    const int n = 10;
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        arr[i] = rand() % 101 - 50;
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    bool zeroFound = false;
    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == 0 && !zeroFound) 
        {
            zeroFound = true;
        }
        if(zeroFound) 
        {
            arr[i] = arr[i + 1];
        }
    }
    for(int i = 0; i < n - 1; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}