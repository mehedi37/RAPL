// QUS : https://vjudge.net/contest/486963?fbclid=IwAR2rxI_cwOi8MbkwClnDOtVjzso07P1Uow36ydVhoFL5DRLbnB8jl0bvFJk#problem/Q


#include<stdio.h>
#include<ctype.h>

int main() {
  char s[1250] = {0};
  unsigned long long int c[26] = {0};
  while(scanf("%s", s) != EOF) {
    for (int i = 0; s[i] != '\0'; i++) {
      if (isalpha(s[i]) == 0) {
        continue;
      }
      s[i] = toupper(s[i]);
      c[s[i]-65]++;
    }
  }
  for (int i = 0; i < 26; i++) {
      printf("%c : %llu\n", i+97, c[i]);
    }
  return 0;
}
