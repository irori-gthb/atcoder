#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  int ans = INT_MAX;
  for (int i = 1; i * i <= n; i++) ans = min(ans, abs(i - n / i) + n % i);
  cout << ans << endl;
  return 0;
}