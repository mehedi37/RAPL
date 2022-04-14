#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int main() {
    int n;
    cin >> n;
    while (n--) {
        vector<int> a;
        int sz;
        cin >> sz;
        for (int i{0}; i < sz; i++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        int flag{0};
        for (int i{0}; i < sz-1; i++) {
            if (abs(a[i]-a[i+1]) > 1) flag++;
        }
        if (abs(a[sz-1]-a[0]) > 1) flag++;
        cout << ((flag > 1)? "NO\n" : "YES\n");
    }
}