#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

// void display(list<int> &a) {
//     for (list<int> :: iterator i = a.begin(); i != a.end(); i++) {
//         cout << *i << endl;
//     }
// }
int main() {
    int n{0}, room[10]{0};
    // n = 9;
    cin >> n;
    string a;
    cin >> a;
    // a = "L0L0LLRR9";
    list<int> l, r;
    // list<int> :: iterator it;
    int lcnt{0}, rcnt{0};
    for (int i{0}; i < n; i++) {
        if (a[i] == 'L') {
            if (!l.empty() && lcnt < 5) {
                room[*l.begin()] = 1;
                l.pop_back();
            } else if (!l.empty() && lcnt >= 5) {
                cout << *r.end() << endl;
                room[*r.end()] = 1;
                r.pop_back();
            } else {
                room[lcnt] = 1;
                lcnt++;
            }
        } else if (a[i] == 'R') {
            if (!r.empty() && rcnt <= 5) {
                // list<int> x = r;
                room[*r.begin()] = 1;
                r.pop_front();
            } else if (!r.empty() && rcnt > 5) {
                // list<int> x = r;
                room[*l.end()] = 1;
                l.pop_back();
            } else {
                room[9-rcnt] = 1;
                rcnt++;
            }
        } else {
            room[a[i]-48] = 0;
            (a[i]-48 < 5) ? l.push_back(a[i]-48) : r.push_front(a[i]-48);
        }
    }
    for (int i{0}; i < 10; i++) {
        cout << room[i];
    }
    cout << endl;
}