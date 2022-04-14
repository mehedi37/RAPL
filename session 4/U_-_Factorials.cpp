#include <iostream>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    fastIO
    int n{0}, fn{0};
    cin >> n;
    string x;
    cin >> x;
    if (n%x.size() == 0) fn = n/x.size();
    else fn = n/x.size() + 1;
    int ans{1};
    for (int i{0}; i < fn; i++) {
        ans *= n;
        n = (n - x.size());
    }
    cout << ans << '\n';
}