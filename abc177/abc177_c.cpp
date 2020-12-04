#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
const ll mod = 1000000007;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  ll calc = 0;
  ll ans = 0;
  rep(i, N) {
    ans = (ans + A[i] * calc) % mod;
    calc = (calc + A[i]) % mod;
  }
  cout << ans << endl;
  return 0;
}