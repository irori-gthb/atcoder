#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = N * 80;
  int m;
  rep(i, N) {
    cin >> m;
    ans -= min(80, m);
  }
  cout << ans << endl;
  return 0;
}