// Qus : https://vjudge.net/contest/486963?fbclid=IwAR2rxI_cwOi8MbkwClnDOtVjzso07P1Uow36ydVhoFL5DRLbnB8jl0bvFJk#problem/L

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char a[200], b[200];
    int x = 0;
    scanf("%s", &a);      // You can use both "a" and "&a"
    for (int i = 0; i < strlen(a); i++) {
        a[i] = tolower(a[i]);
        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u' && a[i] != 'y') {
            b[x] = a[i];
            x += 1;
        }
    }
    for (int i = 0; i < x; i++) {
        printf(".%c", b[i]);
    }
    return 0;
}
