#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int main() {
    fastIO
    int tc{0};
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        double r{0};
        cin >> r;
        double circle{0}, square{0};
        circle = 2*acos(0.0)*r*r;
        square = 4*r*r;
        cout<<setprecision(2)<<fixed;
        cout << "Case " << t << ": " << (square - circle) << '\n';
    }
}