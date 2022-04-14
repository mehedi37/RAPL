#include<iostream>
// #include<algorithm>
#include<string>
#define rep(a, b) for (int i{(a)}; i < (b); i++)
#define ret(a, b, c) for (int (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int s2[26]{0};
        string s1;
        cin >> s1;
        int count = 0;
        rep(0, s1.size()) {
            s2[s1[i]%97]++;
        }
        rep(0, 26) {
            if (s2[i] == s1.size() && s2[i] != 1) {
                count = 2;
                break;
            }
            if (s2[i] > 2) {
                s2[i] = 2;
            }
            count += s2[i];
        }
        cout << count/2 << endl;
    }
}