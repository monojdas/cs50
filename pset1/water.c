#include <stdio.h>

int get_positive_int();

int main(void)
{
  int n, b;
  printf("Minutes: ");
  n=get_positive_int();
  b=n*12;
  printf("Bottles: %d",b);
}


int get_positive_int(void)
{
  int n;
  scanf("%d",  &n);
  while (n<=0)
  {
    printf("Retry\n");
    printf("Minutes: ");
    scanf("%d", &n);
  }
  return n;
}
