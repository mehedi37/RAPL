#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int32_t> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int scnt{0}, dcnt{0};
    for (int i = 0; i < n; i++) {
        if (i%2 == 1) {
            if (a.back() > a.front()) {
                scnt += a.back();
                a.pop_back();
            } else {
                scnt += a.front();
                a.erase(a.begin());
            }
        } else {
            if (a.back() > a.front()) {
                dcnt += a.back();
                a.pop_back();
            } else {
                dcnt += a.front();
                a.erase(a.begin());
            }
        }
    }
    cout << dcnt << " " << scnt << endl;
}