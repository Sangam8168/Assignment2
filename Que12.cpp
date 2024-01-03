#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1, k;

    for (int i = 0; i < n; ++i) {
        k = a;
        for (int j = 0; j <= i; ++j) {
            cout << k << " ";
            k = a + b;
            a = b;
            b = k;
        }
        cout << endl;
    }
}
