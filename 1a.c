#include <stdio.h>

long long int get_rect_num(long long int x, long long int a)
{
  return (x % a) ? (x / a) + 1 : x / a;
}

int main(void)
{
  long long int n, m, a;
  scanf("%lld%lld%lld", &n, &m, &a);
 
  printf("%lld", get_rect_num(n, a) * get_rect_num(m, a));
  return 0;
}
