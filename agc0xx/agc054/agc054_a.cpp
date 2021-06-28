#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  if (S[0] != S[N - 1]) {
    cout << 1 << endl;
    return 0;
  }
  rep(i, N - 3) {
    if (S[0] != S[i + 1] && S[i + 2] != S[N - 1]) {
      cout << 2 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}