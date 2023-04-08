#include <stdio.h>

int main() {
  int num = 10;
  char letter = 'A';
  char name[] = "John Doe";
  float decimal = 3.14;

  printf("Integer value: %d\n", num);
  printf("Character value: %c\n", letter);
  printf("String value: %s\n", name);
  printf("Floating point value: %.2f\n", decimal);

  return 0;
}
