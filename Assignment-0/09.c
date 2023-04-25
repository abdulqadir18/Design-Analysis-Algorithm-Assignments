#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  int n, day;
  scanf("%d %d", &n, &day);
  printf("M  T  W  T  F  S  S\n");
  for(int i=1; i<=day; i++) printf("  ");
  printf("1");
  for(int i=2; i<=n; i++)
  {
    if(day%7==1) printf("\n");
    else printf("  ");
    printf("%d", i);
    day++;
  }
  return 0;
}