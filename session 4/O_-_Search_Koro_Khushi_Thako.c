#include <stdio.h>

long long int a[100001];


long long int first(long long int low, long long int high, long long int key) {
    long long int ans = -1;

    while (low <= high) {
        long long int mid = low + (high - low + 1) / 2;
        long long int midVal = a[mid];

        if (midVal < key) {
            low = mid + 1;
        } else if (midVal > key) {
            high = mid - 1;
        } else if (midVal == key) {
            ans = mid;
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
long long int ne = 0, nq = 0;

scanf("%lld%lld", &ne, &nq);


for (long long int i=0; i < ne; ++i) {
    if (i > 0 && a[i] == a[i-1]) {
        continue;
    }
    scanf("%lld", &a[i]);
}
for (long long int j=0; j < nq; ++j)
{
long long int itf = 0;
long long int its = 0;

scanf("%lld", &its);
itf = first(0, ne-1, its);
printf("%lld\n", itf);
}

return 0;
}