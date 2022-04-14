#include <iostream>
#include <cmath>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    fastIO
    double a[1000002]{0}, tc{0};

    // 10 based log prefix sum
    for (int i = 1; i <= 1000000; i++) {
        a[i] = a[i - 1] + log(i);
    }
    cin >> tc;
    for (int t{2}; t <= tc; t++) {
        int32_t n, b;
        cin >> n >> b;
        cout << "Case " << t << ": " <<static_cast<int>(a[n]/log(b))+1 << '\n';
    }
}