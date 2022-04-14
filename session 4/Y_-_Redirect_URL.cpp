#include <iostream>
#include <vector>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    fastIO
    int tc;
    cin >> tc;
    for (int t{1}; t <= tc; t++) {
        string url, ssl;
        cin >> url;
        for (int i{0}; i < url.size(); ++i) {
            if (url[i] == ':') {
                ssl = url.substr(i);
                break;
            }
        }
        cout << "Case " << t << ": " << "https"+ssl << '\n';
    }
}