#include <stdio.h>

int main(int argc, char *argv[]) {
  int a, b, c, maiorAB, maior;
  scanf("%d%d%d", &a, &b, &c);
  if (a > b) {
    maiorAB = (a + b + (a - b)) / 2;
  } else {
    maiorAB = (a + b + (b - a)) / 2;
  }
  if (maiorAB > c) {
    printf("%d ", maiorAB);
  } else {
    printf("%d ", c);
  }
  printf("eh o maior\n");
  return 0;
}
