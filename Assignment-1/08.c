#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int exy(int x, int y, int n, int c)
{
  if(n==0) return 1;
  return c*y + pow(x,2)/exy(x, y, n-1, c+4);
}

int main()
{
  int x, y, n;
  scanf("%d %d %d", &x, &y, &n);
  int ans = 1 + 2*x/((2*y-x) + pow(x,2)/exy(x, y, n, 6));
  printf("%d", ans);
  return 0;
}