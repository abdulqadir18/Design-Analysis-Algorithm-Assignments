#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  int n;
  scanf("%d", &n);
  if(n%2==0) printf("Divisible by 2");
  if(n%3==0) printf("Divisible by 3");
  if(n%4==0) printf("Divisible by 4");
  if(n%12==0) printf("Divisible by 12");
  return 0;
}