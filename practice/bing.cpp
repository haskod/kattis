#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> map;

  while (n--) {
    string s;
    cin >> s;

    int count = 0;

    auto it = map.find(s);
    if (it != map.end()) count = map[s];

    printf("%d\n", count);

    string t = "";
    int m = s.size();
    for (int i = 0; i < m; i++) {
      t += s[i];
      auto it = map.find(t);
      if (it != map.end())
        map[t]++;
      else
        map[t] = 1;
    }
  }

  return 0;
}
