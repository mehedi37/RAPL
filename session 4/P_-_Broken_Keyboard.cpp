#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        set<char> ch;
        for (int i{0}; s[i] != '\0'; i++) {
            if (s[i] == s[i+1]) i++;
            else ch.insert(s[i]);
        }
        for (auto val : ch) {
            cout << val;
        }
        cout << '\n';
    }
}