#include<iostream>
#include<vector>
#include<algorithm>
#define foi(a, b, c) for (ll c{(a)}; c < (b); c++)
#define fod(a, b, c) for (ll (c){(a)}; (c) < (b); (c)--)
#define ll int64_t
using namespace std;


int main() {
    int n{0};
    cin >> n;
    while (2*n--) {
        int tc{0};
        cin >> tc;
        vector<int> a;
        foi(0, tc, i) {
            int x{0};
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end(), greater<int>());
        int flag{0};
        foi(0, a.size(), i) {
            if ((a.at(i) - a.at(a.size()-1)) % 2 == 0) {
                flag = 1;
            } else {
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag == 1) {
            cout << "YES" << endl;
            continue;
        }
    }
}