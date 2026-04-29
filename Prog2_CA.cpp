#include <iostream>
using namespace std;

void drawDiamond(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int size;

    cout << "Enter the range of the diamond: ";
    cin >> size;
    drawDiamond(size);

    return 0;
}