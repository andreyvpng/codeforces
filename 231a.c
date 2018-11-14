#include <stdio.h>

#define FRIENDS_NUMBER 3

int main()
{
  int problem_count, total = 0;
  scanf("%d", &problem_count);
  while(problem_count--) {

    int x = 0,
        y = 0;

    for(int i = 0; i < FRIENDS_NUMBER; i++) {
      scanf("%d", &x);
      y += x;
    }

    if (y >= 2)
      total += 1;
  }
  printf("%d", total);
  return 0;
}
