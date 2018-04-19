#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int n;
    scanf("%d", &n);

    ll u[n];
    for (int i = 0; i < n; i++) scanf("%lld", &u[i]);

    ll v[n];
    for (int i = 0; i < n; i++) scanf("%lld", &v[i]);

    sort(u, u + n);
    sort(v, v + n, greater<ll>());

    ll sum = 0;
    for (int i = 0; i < n; i++)
      sum += u[i] * v[i];

    printf("Case #%d: %lld\n", i + 1, sum);
  }

  return 0;
}
