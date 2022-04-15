#include <stdio.h>
int n;
int in[100005];
int out[100005];

int main() {
    int i, c, f, x;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
            scanf("%d", &x);
            in[x] = i;
    }
    c = f = 0;
    for(i = 0; i < n; i++) {
            scanf("%d", &x);
            x = in[x];
            out[x] = 1;
            if(x > c) {
                    f++;
            }
            while(out[c]) {
                    c++;
            }
    }
    printf("%d\n", f);
    return 0;
}
