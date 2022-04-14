#include <stdio.h>
int n;
int in[100005];
int out[100005];

int main() {
    int i, c, f, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
            scanf("%d", &x);
            in[x] = i;
    }
    for (i = 0; i <= n; i++) {
        printf("in: %d ", in[i]);
    }
    c = 0;
    f = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        // printf("x: %d ", x);
        x = in[x];
        out[x] = 1;
        // printf("%d\n", x);
        // printf("%d %d", c, f);
        // printf("Oin: %d\n", out[i-1]);
        if (x > c) {
                f++;
        }
        while (out[c]) {
                c++;
        }
    }
    for (i = 0; i <= n; i++) {
        printf("o: %d\n", out[i]);
    }
    printf("%d\n", f);
    return 0;
}