#include<stdio.h>
#include<math.h>

int main()
{
  int n;
  scanf("%d", &n);
  
  int even =1, odd= 1;
  int i=0;
  while(n!=0)
  {
    int digit = n%10;
    n/=10;
    if(i%2==0) even*=digit;
    else odd*=digit;
    i++;
  }
  int ans = odd+even;
  printf("%d", ans);
  
  return 0;
}