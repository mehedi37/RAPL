#include<iostream>
#define rep(a, b) for (ll i{(a)}; i < (b); i++)
#define ret(a, b, c) for (ll (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;


int main() {
    ll n{0}, b[300001]{0}, ans{0}, sum{0}, sqrsum{0};
    cin >> n;
    rep(0, n) {
        cin >> b[i];
        sum += b[i];
        sqrsum += b[i] * b[i];
    }
    rep(0, n) {
        ans = n*sqrsum - sum*sum;
    }
    cout << ans << endl;
}
