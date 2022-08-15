#include <iostream>
using namespace std;
int main() {
    const int N = 10;
    int r, arr[N], indx = -1, number;
    cin >> r >> number;
    srand(r);
    cout << endl;
    for(int i = 0; i < N; i++)
    {
        arr[i] = rand() % 21;
        cout << arr[i] << "\t";
    }
    for(int i = 0; i < N; i++)
    {
        if(arr[i] == number){
            indx = i;
            break;
        }
    }
    cout << endl;
    if (indx == -1)
    {
        cout << "no";
    }
    else { 
        for(int i = N-1; i > indx; i--)
        {
            for(int k = indx + 1; k < i; k++)
            {
                if(arr[k] > arr[k+1])
                {
                    int tmp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = tmp;
                }
            }
        }
        for(int i = 0; i < indx - 1; i++)
        {
            int j = i;
            int tmp = arr[j+1];
            while (j>=0 && arr[j]<tmp)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = tmp;
        }
        for(int i = 0; i<N; i++)
        {
            cout << arr[i] << "\t";
        }
    }
    
             
    return 0;
}