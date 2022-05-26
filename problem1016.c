#include <stdio.h>

int main(int argc, char *argv[]) {
  int dis, tempo;
  const int vx = 60;
  const int vy = 90;

  scanf("%d", &dis);
  // Multiplica-se por 60 para encontrar o tempo em minutos.
  tempo = ((dis * 60) / (vy - vx));
  printf("%d minutos\n", tempo);

  return 0;
}
