#include <stdio.h>

int main() {
  int x;
  int y;

  printf("1st number: ");
  scanf("%d", &x);

  printf("2nd number: ");
  scanf("%d", &y);

  int m = x * y;
  printf("Then %d times %d is %d\n", x, y, m);
}
