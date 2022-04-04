#include <iostream>
#include <vector>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    for (int iz = 1; iz <= tc; iz++) {
        int64_t n, q;
        cin >> n >> q;
        int64_t sum = 0;
        vector<int64_t> a;
        for (int64_t i = 0; i < n; i++) {
            int64_t temp;
            cin >> temp;
            sum += temp;
            if (i < 1) {
                a.push_back(temp);
            } else {
                a.push_back(sum);
            }
        }
        cout << "Case " << iz << ":" << endl;
        for (int64_t i = 0; i < q; i++) {
            int64_t t1, t2;
            cin >> t1>> t2;
            int64_t z = (t1 == 1) ? a.at(t2-1) : a.at(t2-1)-a.at(t1-2);
            cout << z << endl;
        }
    }
}
