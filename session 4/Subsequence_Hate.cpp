#include<iostream>
#include<string>
#define rep(a, b) for (int i{(a)}; i < (b); i++)
#define ret(a, b, c) for (int (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;


int main() {
    int n;
    string a;
    cin >> n;
    while (n--) {
        int one{0}, zero{0}, ans{0};
        cin >> a;
        rep(0, a.size()) {
            (a[i] == '1') ? one++ : zero++;
        }
        ans = min(one, zero);
        rep(0, a.size()) {
            if (a[i] == '1') {
                zero++; one--;
            } else {
                one++; zero--;
            }
            ans = min(ans, min(one, zero));
        }
        cout << ans <<endl;
    }
}
