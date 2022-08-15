#include <iostream>
using namespace std;
int main() {
    const int N = 7;
    int r, arr[N][N];
    cin >> r;
    srand(r);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = rand() % 101;
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    int max = arr[0][0];
    for (int i = 0; i < ((N - 1) / 2 + 2); i++)
    {
        for (int j = i; j < N - i; j++)
        {
            if(max < arr[i][j]) max = arr[i][j];
        }
    }
    cout << max << endl;
    return 0;
}