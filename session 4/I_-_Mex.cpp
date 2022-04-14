#include<iostream>
#define foi(a, b, c) for (ll c{(a)}; c < (b); c++)
#define fod(a, b, c) for (ll (c){(a)}; (c) < (b); (c)--)
#define ll int64_t
using namespace std;


int main() {
    ll n{0};
    cin >> n;
    ll a[2002]{0};
    foi(0, n, i) {
        ll temp;
        cin >> temp;
        a[temp]++;
    }
    int x{0};
    while (a[x])
        x++;
    cout << x << "\n";
}