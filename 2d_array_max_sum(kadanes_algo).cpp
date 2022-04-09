/* 
By : MeEk_0
09/04/22 | 5:15
a nice day with windy atmosphere
*/

#include<iostream>
#include<string>
#define rep(a, b) for (int i{(a)}; i < (b); i++)
#define ret(a, b, c) for (int (c){(a)}; (c) < (b); (c)++)
#define ll int64_t
using namespace std;

int main() {
    int n{0};
    cin >> n;
    int mtrx[n][n]{0},  a[4]{0}, sum{0}, ans{INT32_MIN};
    rep(0, n) {
        ret(0, n, j) {
            cin >> mtrx[i][j];
        }
    }

    rep(0, n) {
        int  rowsum[n]{0};
        ret(i, n, j) {
            ret(0, n, z) {
                rowsum[z] += mtrx[z][j];
            }
// sukuna's domain
            {
                int psum{0}, msum{INT32_MIN}, negFlag{-1};
                rep(0, n) {
                    psum += rowsum[i];
                    if (psum < 0) psum = 0;
                    else if (psum > msum) negFlag = i;
                    msum = max(psum, msum);

                }
                if (negFlag == -1) {
                    msum = rowsum[0];
                    rep(1, n) {
                        msum = max(rowsum[i], msum);
                    }
                }
                sum = msum;
            }
// End
            ans = max(sum, ans);
        }
    }
    cout << ans << endl;

}
