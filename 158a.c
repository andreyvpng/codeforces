#include <stdio.h>

#define MAX 50

int main()
{
  int n, k;
  scanf("%d%d", &n, &k);
  int score[MAX], total = 0;
  for (int i = 0; i < n; ++i) {
    scanf("%d", score + i); 
  }
  for (int i = 0; i < n; ++i) {
    if (score[k - 1] <= score[i] && 0 < score[i]) {
      total += 1;
    }
  }
  printf("%d", total);
  return 0;
}
