#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX = 1e4;
int R1, C1, R2, C2;
int a[MAX][MAX], b[MAX][MAX];

void mulMat() {
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            int sum = 0;
            for (int k = 0; k < R2; k++) {
                sum += a[i][k] * b[k][j];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }
}

void solve() {
    cout << "Enter the size of row of matrix A: ";
    cin >> R1;
    cout << "Enter the size of column of matrix A: ";
    cin >> C1;
    cout << "Enter the size of row of matrix B: ";
    cin >> R2;
    cout << "Enter the size of column of matrix B: ";
    cin >> C2;
    if (C1 != R2) {
        cout << "\nWe can not proceed the program. Please enter the correct "
                "dimension";
        return;
    }

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            cout << "Input matrix A row " << i + 1 << " column " << j + 1
                 << ": ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            cout << "Input matrix B row " << i + 1 << " column " << j + 1
                 << ": ";
            cin >> b[i][j];
        }
    }
    cout << "The result is: \n";
    mulMat();
    return;
}

int main() {
    solve();
    return 0;
}
