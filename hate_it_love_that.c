/*  KoDer :P */

// QUS : https://vjudge.net/contest/486963?fbclid=IwAR2rxI_cwOi8MbkwClnDOtVjzso07P1Uow36ydVhoFL5DRLbnB8jl0bvFJk#problem/S

#include<stdio.h>

int main() {
  char a[3][50] = {"I hate", "I love"};
  char b[3][50] = {"that", "it"};
  int t = 0;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    printf("%s %s ", (i > 1) ? a[(i%2)%t] : a[i%t], (i+1 == t) ? b[1] : b[0]);
  }
  return 0;
}
