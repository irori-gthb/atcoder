#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  cout << min(N % K, abs(N % K - K)) << endl;
  return 0;
}