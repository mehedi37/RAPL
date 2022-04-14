#include <iostream>
// #include <cmath>
// #include <iomanip>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    fastIO
    int tc{0};
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n;
        cin >> n;
        int a[2]{0};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > 0) a[0] += x;
        }
        cout << "Case " << t << ": " << a[0] << '\n';
    }
}