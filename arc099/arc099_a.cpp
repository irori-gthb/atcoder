#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);

  rep(i, N) cin >> A[i];
  cout << (N - 1) / (K - 1) + min(1, (N - 1) % (K - 1)) << endl;
  return 0;
}