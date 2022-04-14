#include <iostream>
#include<algorithm>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

string eq(string &str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    return str;
}


int main() {
    fastIO
    int tc;
    cin >> tc;
    string s1, s2;
    getline(cin, s1);

    for (int t{1}; t <= tc; t++) {
        string ans;
        getline(cin, s1);
        getline(cin, s2);

        // cout << s1 << "\n" << s2 << '\n';
        s1 = eq(s1);
        s2 = eq(s2);

        // cout << s1 << "\n" << s2 << '\n';
        if (s1 == s2) {
            ans = "Yes\n";
        } else {
            ans = "No\n";
        }
        cout << "Case " << t << ": " << ans;
    }
}