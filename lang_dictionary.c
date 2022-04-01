// MeEk_0 | 01.04.22 | 4.29 p.m | UTC+6.00

// QUS : https://vjudge.net/contest/486963?fbclid=IwAR2rxI_cwOi8MbkwClnDOtVjzso07P1Uow36ydVhoFL5DRLbnB8jl0bvFJk#problem/N

#include<stdio.h>
#include<ctype.h>
#include<string.h>

char * upp(char * a) {
  for (int i = 0; i < strlen(a); i++) {
    a[i] = toupper(a[i]);
  }
  return a;
}
int main() {
  int t = 20000, x = 1;
  while (t--) {
    char a[20] = {0};
    const char b[20][20] = {"#", "HELLO", "ENGLISH", "HOLA", "SPANISH", "HALLO", "GERMAN", "BONJOUR", "FRENCH", "CIAO", "ITALIAN", "ZDRAVSTVUJTE", "RUSSIAN", "UNKNOWN"};
    scanf("%s", &a);
    upp(a);
    if (strcmp(a, b[0]) == 0) {
      break;
    }
    for (int i = 1; i < 12; i += 2) {
      if (strcmp(a, b[i]) == 0) {
        printf("Case %d: %s\n", x, b[i+1]);
        break;
      } else if (i+2 == 13) {
          printf("Case %d: %s\n", x, b[13]);
      }
    }
    x++;
  }
  return 0;
}
