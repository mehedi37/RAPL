#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    fastIO
    int tc{0};
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int n, p, q;
        cin >> n >> p >> q;
        int a[n]{0};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans{0}, eggs{0};
        for (int i{0}; i < n; i++) {
            // cout << eggs+a[i] << endl;
            if ((eggs+a[i]) <= q && ans < p) {
                eggs += a[i];
                ans++;
            }
        }
        cout << "Case " << t << ": " << ans << '\n';
    }
}