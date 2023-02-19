#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if(n<=1) printf("%d", n);
  int prev = 1, prev2 = 0;
  for(int i=2; i<=n; i++)
  {
    int temp = prev;
    prev = prev + prev2;
    prev2 = temp;
  }
  printf("%d", prev);
  return 0;
}