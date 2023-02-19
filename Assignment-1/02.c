#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);
  int sum = 0, product = 1;
  while(n!=0)
  {
    int digit = n%10;
    n/=10;
    sum+=digit;
    product*=digit;
  }
  printf("%d %d", sum, product);
  return 0;
}