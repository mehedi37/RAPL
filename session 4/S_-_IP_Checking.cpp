#include <iostream>
#include <vector>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);

int binaryToDecimal(string n)
{
    int dec_value = 0;
    int base = 1;
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '1')
            dec_value += base;
        base *= 2;
    }
    return dec_value;
}

int main() {
    int tc{0};
    cin >> tc;
    for (int z{1}; z <= tc; z++) {
        string ipd, ipb, temp, fnl;
        cin >> ipd >> ipb;
        for (int i{0}; i < ipb.length()+1; i++) {
            if (ipb[i] == '.' || i == ipb.length()) {
                fnl += to_string(binaryToDecimal(temp));
                if (i != ipb.length())
                    fnl += ".";
                temp = "";
                continue;
            }
            temp += ipb[i];
        }
        if (fnl == ipd)
            cout << "Case " << z << ": Yes" << '\n';
        else
            cout << "Case " << z << ": No" << '\n';
    }
}
