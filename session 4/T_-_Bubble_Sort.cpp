#include<iostream>
using namespace std;
#define fastIO        ios_base::sync_with_stdio(0);cin.tie(nullptr);


void sort(int array[], int count) {
    int i, j, temp;
    int swaps = 0;
    for (i = 0; i < count-1; ++i) {
        for (j = 0; j < count-1-i; ++j) {
            if (array[j] > array[j+1]) {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
                swaps++;
            }
        }
    }
    for (int i{0}; i < count; ++i) {
        cout << array[i];
        if (i != count-1) {
            cout << ' ';
        }
    }
    cout << '\n' << swaps << '\n';
}
int main() {
    int n{0};
    cin >> n;
    int a[n]{0};
    for (int i{0}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, n);
    return 0;
}