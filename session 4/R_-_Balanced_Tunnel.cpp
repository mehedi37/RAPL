#include<iostream>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);


int main() {
    fastIO
    int n{0};
    cin >> n;
    int b[n], a[n];
    for (int i{0}; i < n; i++) {
         cin >> a[i];
         a[i]--;
    }
    for (int i{0}; i < n; i++) {
        int temp;
        cin >> temp;
        b[temp-1] = i;
    }
    int fn{0}, flg{-1};
    for (auto j = 0; j < n; j++) {
        //cout << b[a[j]] << ' ';
        if (b[a[j]] > flg) {
            //cout << endl;
            flg = b[a[j]];
            continue;
        }
        fn++;
    }
    cout << fn << '\n';
}
