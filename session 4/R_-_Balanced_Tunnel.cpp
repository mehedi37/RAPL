#include<iostream>
#include<vector>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

// void dis(vector<int> &v) {
//     for (auto val : v) {
//         cout << val << ' ';
//     }
// }

int main() {
    fastIO
    int n{0};
    cin >> n;
    vector<int> b, a;
    for (int i{0}; i < n; i++) {
        int temp{0};
        cin >> temp;
        a.push_back(temp);
    }
    for (int i{0}; i < n; i++) {
        int temp{0};
        cin >> temp;
        b.push_back(temp);
    }
    int fn{0}, flg{0};
    for (int i{0}; b.begin()+i+1 != b.end(); i++) {
        if (b[i] != a[i]) {
            b.erase(b.begin()+i);
            fn++;
            i--;
        }
    }
    // dis(a);
    // cout << "\n#########################\n";
    // dis(b);

    cout << fn << '\n';
}