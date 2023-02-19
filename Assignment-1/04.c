#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if(n>=0) printf("Positive\n");
  else printf("Negative\n");

  printf("%d\n", abs(n));

  int product =1;
  while(n!=0)
  {
    int digit = n%10;
    n/=10;
    product*=digit;
  }
  if(product>1000) printf("Greater than 1000");
  return 0;
}