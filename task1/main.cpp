#include <iostream>
#include <iomanip>>
using namespace std;
int main() {
    int o;
    double c, sum;
    cin >> o >> c;
    if (o < 0 || c < 0) cout << "ERROR";
    else {
        sum = (o < 41) ? o * c : 40 * c + (o - 40) * c * 1.5;
        cout <<  fixed << setprecision(2) << sum;
    }
    return 0;
}