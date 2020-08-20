#include <stdio.h>
int main(void)
{
  float base,high,area;
  printf("Input base = ");
  scanf("%f",&base);
  printf("Input high = ");
  scanf("%f",&high);
  area = 0.5*base*high;
  printf("Result Triangle area = %.2f",area);
  return 0;
}
