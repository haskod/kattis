#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  while (n--) {
    int x;
    scanf("%d", &x);

    printf("%d is ", x);

    if (abs(x) % 2)
      printf("odd");
    else
      printf("even");

    printf("\n");
  }

  return 0;
}
