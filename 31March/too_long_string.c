// QUS : https://vjudge.net/contest/486963?fbclid=IwAR2rxI_cwOi8MbkwClnDOtVjzso07P1Uow36ydVhoFL5DRLbnB8jl0bvFJk#problem/K

#include<stdio.h>
#include<string.h>

int main() {
    char a[1000];
    int t = 0;
    scanf("%d", &t);
    while (t--) {
        scanf("%s", &a);
        if (strlen(a) > 10) {
            printf("%c%d%c\n", a[0], strlen(a)-2, a[strlen(a) - 1]);
        } else {
            printf("%s\n", a);
        }
    }
    return 0;
}
