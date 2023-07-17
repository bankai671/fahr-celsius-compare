#include <stdio.h>

void print_fahr_celsius_compare(int, int, int);
int main()
{
  int lower, upper, step;

  printf("\nEnter value where to start: \t");
  scanf("%d", &lower);
  printf("Enter value where to end: \t");
  scanf("%d", &upper);

  while (lower > upper) {
    printf("\nIncorrect value!!!\nLower value must be lower then upper value!\n");
    printf("\nEnter value where to start: \t");
    scanf("%d", &lower);
    printf("Enter value where to end: \t");
    scanf("%d", &upper);
  }

  printf("Enter value to increase: \t");
  scanf("%d", &step);

  while (step < 0) {
    printf("\nIncorrect value!!!\nValue must be possitive!\nEnter value to increase: \t");
    scanf("%d", &step);
  }

  if (step > 0) {
    print_fahr_celsius_compare(lower, upper, step);
  }

  return 0;
}

void print_fahr_celsius_compare(int lower, int upper, int step)
{
  printf("\n");
  for (int fahr = lower; fahr <= upper; fahr += step) {
    printf("%3d\t%6.1f\n", fahr, (.5/.9) * (fahr-32));
  }
}