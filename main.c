#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x;
  printf("Enter an integer\n");
  scanf("%d", &x);
  if (x%2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");
  return 0;
}
