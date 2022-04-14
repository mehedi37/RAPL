#include<iostream>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    int n{0};
    cin >> n;
    for (int i{0}; i < n; i++) {
        for (int j{0}; j < n; j++) {
            if (j == i && (i != n/2 && j != n/2)) {
                cout << "\\";
            } else if (i == n/2 && j == n/2) {
                cout << "X";
            } else if (j == n-i-1) {
                cout << "/";
            } else {
                cout << "*";
            }
        }
        cout << '\n';
    }
}