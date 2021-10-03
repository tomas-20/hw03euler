#include <stdio.h>
int factorsum(int n, int f) {
  int factors = n / f;
  return factors * (factors + 1) * f;
}
int euler1(int n) {
  int num = n - 1;
  return (factorsum(num, 3) + factorsum(num, 5) - factorsum(num, 15)) / 2;
}
int main() {
  printf("euler1(1000)=%d\n", euler1(1000));
}
