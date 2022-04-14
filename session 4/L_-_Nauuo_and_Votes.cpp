#include<iostream>
using namespace std;

int main(int argc, const char** argv) {
    int a, b, c;
    std::cin >> a >> b >> c;
    if ((a > b) && (a - b) > c) {
        cout << "+" << endl;
    } else if ((a < b) && (b - a) > c) {
        cout << "-" << endl;
    } else if ((a - b) <= c && c != 0) {
        cout << "?" << endl;
    } else {
        cout << "0" << endl;
    }
    return 0;
}