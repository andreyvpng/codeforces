#include <stdio.h>
#include <ctype.h> 
#include <string.h>

#define MAX 101

int isVowel(char c)
{
  c = tolower(c);
  switch(c) {
    case 'a': case 'o': case 'y': case 'e': case 'u': case 'i':
      return 1;
    default:
      return 0;
  } 
}

int main()
{
  char s[MAX];
  scanf("%s", s);
  int len = strlen(s);
  for (int i = 0; i < len; i++) {
    if (isVowel(s[i]))
      continue;
    printf(".%c", tolower(s[i]));
  }
  return 0;
}
