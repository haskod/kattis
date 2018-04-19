#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  scanf("%d%d", &x, &y);

  int res;
  bool a = x > -1;
  bool b = y > -1;

  if (a && b)
    res = 1;
  else if (!a && b)
    res = 2;
  else if (!a && !b)
    res = 3;
  else
    res = 4;

  printf("%d\n", res);

  return 0;
}
