#include <bits/stdc++.h>
using namespace std;

int main() {
  int x;
  int n = 0;
  int t = 0;
  int pen[26] = {0};

  do {
    cin >> x;

    if (x > -1) {
      char c;
      string s;
      cin >> c >> s;

      int i = c - 'A';

      if (s == "wrong")
        pen[i] += 20;
      else {
        n++;
        t += x + pen[i];
      }
    }
  } while (x > -1);

  printf("%d %d\n", n, t);

  return 0;
}
