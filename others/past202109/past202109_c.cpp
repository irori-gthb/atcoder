#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X, A;
  cin >> N >> X;

  int ans = 0;
  rep(i, N) {
    cin >> A;
    if (A == X) ans++;
  }
  cout << ans << endl;
  return 0;
}