#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  if (n == 2)
    printf("NO");
  else if (n & 1)
    printf("NO");
  else
    printf("YES");
  return 0;
}
