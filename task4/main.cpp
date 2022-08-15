#include <iostream>
using namespace std;
int main() {
    const int N = 10;
    int arr[N], r;
    cin >> r;
    srand(r);
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 41 - 20;
        cout << arr[i] << "\t";
    }
    int indx = 0, indx1 = N - 1;
    while (arr[indx] >= 0)
    {
        indx++;
    }
    while (arr[indx1] >= 0)
    {
        indx1--;
    }
    for(int i = indx; i < indx1 ; i++)
    {
        int tmp = arr[i + 1];
        int j = i;
        while (j > indx - 1 && arr[j] > tmp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = tmp;
    }
    cout << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}