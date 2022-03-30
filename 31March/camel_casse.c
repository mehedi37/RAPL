// QUS : https://vjudge.net/contest/486963?fbclid=IwAR2rxI_cwOi8MbkwClnDOtVjzso07P1Uow36ydVhoFL5DRLbnB8jl0bvFJk#problem/J

#include<stdio.h>
#include<string.h>

int main() {
    char a[999999];
    int count = 1;
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            count += 1;
        }
    }
    printf("%d\n", count);
    return 0;
}
