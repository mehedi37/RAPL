#include<iostream>
#define rep(a, b) for (int i{(a)}; i < (b); i++)
#define ret(a, b, c) for (int (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;


int sldwindow(int a[], int n, int k) {
    ll fsum{0};
    ll sum{0};
    rep(0, n) {
        sum += a[i];
        if (i > k-1) sum -= a[i-k];
        fsum = (sum > fsum) ? sum : fsum;
    }
    return fsum;
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[100001]{0};
    ll count = 0;
    rep(0, n) {
        cin >> a[i];
    }
    rep(0, n) {
        int temp{0};
        cin >> temp;
        if (temp == 1) {
            count += a[i];
            a[i] = 0;
        }
    }
    count += sldwindow(a, n, k);
    cout << count << endl;
}
