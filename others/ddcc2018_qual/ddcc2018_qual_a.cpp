#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int ans = 1;
  rep(i, N) ans *= 4;

  cout << ans << endl;
  return 0;
}