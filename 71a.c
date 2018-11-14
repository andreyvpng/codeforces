#include <stdio.h>
#include <string.h>

#define MAXLENGTH 101

int main()
{
  char s[MAXLENGTH];
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%s", s);
    int length = strlen(s);
    if (length <= 10) {
      printf("%s\n", s);
    } else {
      printf("%c%d%c\n", s[0], length - 2, s[length - 1]);
    }
  }
  return 0;
}
