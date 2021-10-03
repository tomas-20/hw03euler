#include <stdio.h>
int factorsum(int n, int f) {
  int factors = n / f;
  return factors * (factors + 1) * f;
}
int euler1(int n) {
  int num = n - 1;
  return (factorsum(num, 3) + factorsum(num, 5) - factorsum(num, 15)) / 2;
}
int gcf(int a, int b) {
  if (b == 0) {
    return a;
  }
  else {
    return gcf(b, a % b);
  }
}
int main() {
  printf("euler1(1000)=%d\n", euler1(1000));
  printf("%d\n", gcf(15, 40));
  printf("%d\n", gcf(40, 15));
}
