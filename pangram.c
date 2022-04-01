// MeEk_0 | 01.04.22 | 3.36 p.m | UTC+6.00

#include<stdio.h>
#include<ctype.h>

int main() {
  char s[1001];
  int c[26] = {0};
  fgets(s, 1001, stdin);
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == 32) {
      continue;
    }
    s[i] = toupper(s[i]);         // a = 65 | A = 97 | space = 32 (ascii) | indexing from 0-25
    c[s[i]-65] += 1;        // if any alphabet is missing its index will be 0
  }
  for (int i = 0; i < 26; i++) {
    if (c[i] == 0) {
        printf("not pangram\n");
        return 0;
    }
  }
  printf("pangram\n");
  return 0;
}
