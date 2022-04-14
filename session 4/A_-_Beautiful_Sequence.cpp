// KoDer ;P

#include<iostream>
#define rep(a, b) for (int i{(a)}; i < (b); i++)
#define ret(a, b, c) for (int (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;


int main() {
    int r{0}, dv{0}, a[100001]{0};
    cin >> dv;
    while (dv--) {
        int chk = 1;
        cin >> r;
        rep(0, r) {
            cin >> a[i];

        }
        rep(0, r) {
            ret(0, r, j) {
                if (a[i] == a[j] && i != j) {
                    chk = 0;
                }
            }
        }
        cout << ((chk == 1 ) ? "prekrasnyy\n" : "ne krasivo\n");
    }
}