#include <stdio.h>

int main() {
  int num = 22;
  char letter = 'A';
  char name[] = "Sara";
  float decimal = 3.14;

  printf("Integer value: %d\n", num);
  printf("Character value: %c\n", letter);
  printf("String value: %s\n", name);
  printf("Floating point value: %.2f\n", decimal);

  return 0;
}
